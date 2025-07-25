; =====================================================================================
; Name: [Your Name]
; Course: [Course Number/Section/Title]
; Program Title: 32-bit Integer Calculator with Base Conversion
; Date: [Current Date]
; Description: A menu-driven calculator that converts between decimal, hexadecimal,
;              and binary representations of 32-bit signed integers
; =====================================================================================

INCLUDE C:\Irvine\Irvine32.inc                                 ; Include Irvine32 macros
INCLUDELIB C:\Irvine\Irvine32.lib                            ; Link against Irvine32 library

.data
    ; Menu and prompt strings
    menuTitle       BYTE "32-bit Integer Calculator", 0dh, 0ah, 0
    menuOptions     BYTE "(1) Decimal", 0dh, 0ah,
                         "(2) Hexadecimal", 0dh, 0ah,
                         "(3) Binary", 0dh, 0ah,
                         "(4) Exit", 0dh, 0ah, 0
    menuPrompt      BYTE "Please choose one of the menu options: ", 0
    
    ; Input prompts
    decimalPrompt   BYTE "Please enter a 32-bit Decimal integer: ", 0
    hexPrompt       BYTE "Please enter a 32-bit Hexadecimal Value: ", 0
    binaryPrompt    BYTE "Please enter a 32-bit Binary Value: ", 0
    
    ; Output labels
    resultsHeader   BYTE "Conversion Results:", 0dh, 0ah, 0
    decimalLabel    BYTE "Decimal Value: ", 0
    hexLabel        BYTE "Hexadecimal Value: ", 0
    binaryLabel     BYTE "Binary Value: ", 0
    
    ; Error messages
    invalidMenu     BYTE "Invalid menu option. Please try again.", 0dh, 0ah, 0
    invalidInput    BYTE "Invalid input. Please try again.", 0dh, 0ah, 0
    
    ; Working variables
    userChoice      DWORD ?                     ; Menu selection
    inputValue      DWORD ?                     ; Converted input value
    tempString      BYTE 100 DUP(0)             ; Temporary string buffer
    inputBuffer     BYTE 100 DUP(0)             ; Input buffer
    bytesRead       DWORD ?                     ; Number of bytes read
    
    ; Constants
    MIN_MENU_CHOICE DWORD 1                     ; Minimum valid menu choice
    MAX_MENU_CHOICE DWORD 4                     ; Maximum valid menu choice
    EXIT_CHOICE     DWORD 4                     ; Exit menu choice
    DECIMAL_CHOICE  DWORD 1                     ; Decimal menu choice
    HEX_CHOICE      DWORD 2                     ; Hexadecimal menu choice
    BINARY_CHOICE   DWORD 3                     ; Binary menu choice

.code
main PROC
    ; =====================================================================================
    ; Main procedure - Controls program flow and menu display
    ; Input: None
    ; Output: Console output showing menu and conversion results
    ; Memory Usage: Uses all declared variables
    ; Register Usage: EAX, EBX, ECX, EDX for various operations
    ; Functional Description: Displays menu, gets user choice, calls appropriate conversion
    ;                        procedures, and loops until user chooses to exit
    ; =====================================================================================
    
MenuLoop:
    call DisplayMenu                            ; Show the menu options
    call GetMenuChoice                          ; Get user's menu selection
    
    mov eax, userChoice                         ; Load user choice into EAX
    cmp eax, EXIT_CHOICE                        ; Check if user wants to exit
    je ExitProgram                              ; Jump to exit if choice is 4
    
    cmp eax, DECIMAL_CHOICE                     ; Check if decimal choice
    je HandleDecimal                            ; Jump to decimal handler
    
    cmp eax, HEX_CHOICE                         ; Check if hexadecimal choice
    je HandleHex                                ; Jump to hex handler
    
    cmp eax, BINARY_CHOICE                      ; Check if binary choice
    je HandleBinary                             ; Jump to binary handler
    
    jmp MenuLoop                                ; Invalid choice, loop back

HandleDecimal:
    call ProcessDecimalInput                    ; Process decimal input and convert
    jmp MenuLoop                                ; Return to menu

HandleHex:
    call ProcessHexInput                        ; Process hexadecimal input and convert
    jmp MenuLoop                                ; Return to menu

HandleBinary:
    call ProcessBinaryInput                     ; Process binary input and convert
    jmp MenuLoop                                ; Return to menu

ExitProgram:
    exit                                        ; Exit the program

main ENDP

DisplayMenu PROC
    ; =====================================================================================
    ; Displays the main menu options
    ; Input: None
    ; Output: Menu displayed to console
    ; Memory Usage: Uses menu string variables
    ; Register Usage: EDX for WriteString calls
    ; Functional Description: Outputs the calculator menu with all available options
    ; =====================================================================================
    
    call Crlf                                   ; Print blank line
    mov edx, OFFSET menuTitle                   ; Load menu title address
    call WriteString                            ; Display menu title
    mov edx, OFFSET menuOptions                 ; Load menu options address
    call WriteString                            ; Display menu options
    ret                                         ; Return to caller

DisplayMenu ENDP

GetMenuChoice PROC
    ; =====================================================================================
    ; Gets and validates menu choice from user
    ; Input: User keyboard input
    ; Output: Valid menu choice stored in userChoice
    ; Memory Usage: Uses userChoice variable
    ; Register Usage: EAX, EDX for I/O operations
    ; Functional Description: Prompts for menu choice, validates input range,
    ;                        displays error for invalid choices
    ; =====================================================================================
    
GetChoiceLoop:
    mov edx, OFFSET menuPrompt                  ; Load menu prompt address
    call WriteString                            ; Display menu prompt
    call ReadInt                                ; Read integer from user
    mov userChoice, eax                         ; Store user's choice
    
    mov ebx, MIN_MENU_CHOICE                    ; Load minimum choice into EBX
    cmp eax, ebx                                ; Check if choice is too low
    jl InvalidChoice                            ; Jump if below minimum
    mov ebx, MAX_MENU_CHOICE                    ; Load maximum choice into EBX
    cmp eax, ebx                                ; Check if choice is too high
    jg InvalidChoice                            ; Jump if above maximum
    
    ret                                         ; Valid choice, return

InvalidChoice:
    mov edx, OFFSET invalidMenu                 ; Load invalid menu message
    call WriteString                            ; Display error message
    jmp GetChoiceLoop                           ; Loop back for new input

GetMenuChoice ENDP

ProcessDecimalInput PROC
    ; =====================================================================================
    ; Processes decimal input and performs conversions
    ; Input: User decimal input
    ; Output: Decimal value and conversions displayed
    ; Memory Usage: Uses inputValue and display variables
    ; Register Usage: EAX, EDX for I/O and conversion operations
    ; Functional Description: Prompts for decimal input, stores value,
    ;                        calls conversion display procedures
    ; =====================================================================================
    
    mov edx, OFFSET decimalPrompt               ; Load decimal prompt address
    call WriteString                            ; Display decimal prompt
    call ReadInt                                ; Read decimal integer
    mov inputValue, eax                         ; Store input value
    
    mov eax, DECIMAL_CHOICE                     ; Set input type to decimal
    call DisplayConversions                     ; Display all conversions
    ret                                         ; Return to caller

ProcessDecimalInput ENDP

ProcessHexInput PROC
    ; =====================================================================================
    ; Processes hexadecimal input and performs conversions
    ; Input: User hexadecimal string input
    ; Output: Hexadecimal value and conversions displayed
    ; Memory Usage: Uses inputBuffer, inputValue, and display variables
    ; Register Usage: EAX, EBX, ECX, EDX for string processing and conversion
    ; Functional Description: Prompts for hex input, converts string to integer,
    ;                        calls conversion display procedures
    ; =====================================================================================
    
    mov edx, OFFSET hexPrompt                   ; Load hex prompt address
    call WriteString                            ; Display hex prompt
    call ReadHex                                ; Read hexadecimal value
    mov inputValue, eax                         ; Store converted value
    
    mov eax, HEX_CHOICE                         ; Set input type to hexadecimal
    call DisplayConversions                     ; Display all conversions
    ret                                         ; Return to caller

ProcessHexInput ENDP

ProcessBinaryInput PROC
    ; =====================================================================================
    ; Processes binary input and performs conversions
    ; Input: User binary string input
    ; Output: Binary value and conversions displayed
    ; Memory Usage: Uses inputBuffer, inputValue, and display variables
    ; Register Usage: EAX, EBX, ECX, EDX, ESI for string processing and conversion
    ; Functional Description: Prompts for binary input, converts string to integer,
    ;                        calls conversion display procedures
    ; =====================================================================================
    
    mov edx, OFFSET binaryPrompt                ; Load binary prompt address
    call WriteString                            ; Display binary prompt
    
    mov edx, OFFSET inputBuffer                 ; Load input buffer address
    mov ecx, SIZEOF inputBuffer - 1             ; Set buffer size (leave room for null)
    call ReadString                             ; Read binary string
    mov bytesRead, eax                          ; Store number of bytes read
    
    call ConvertBinaryString                    ; Convert binary string to integer
    mov eax, BINARY_CHOICE                      ; Set input type to binary
    call DisplayConversions                     ; Display all conversions
    ret                                         ; Return to caller

ProcessBinaryInput ENDP

ConvertBinaryString PROC
    ; =====================================================================================
    ; Converts binary string to 32-bit integer
    ; Input: Binary string in inputBuffer
    ; Output: Converted value in inputValue
    ; Memory Usage: Uses inputBuffer and inputValue
    ; Register Usage: EAX (accumulator), EBX (multiplier), ECX (counter), 
    ;                EDX (temp), ESI (string pointer)
    ; Functional Description: Parses binary string character by character,
    ;                        accumulates binary value, ignores spaces
    ; =====================================================================================
    
    mov esi, OFFSET inputBuffer                 ; Point to input buffer
    mov eax, 0                                  ; Clear accumulator
    mov ecx, 0                                  ; Clear counter
    
ConvertLoop:
    mov dl, [esi]                               ; Get current character
    cmp dl, 0                                   ; Check for end of string
    je ConvertDone                              ; Jump if end of string
    
    cmp dl, ' '                                 ; Check for space character
    je SkipSpace                                ; Skip spaces
    
    cmp dl, '0'                                 ; Check if character is '0'
    je ProcessZero                              ; Process zero bit
    
    cmp dl, '1'                                 ; Check if character is '1'
    je ProcessOne                               ; Process one bit
    
    jmp ConvertDone                             ; Invalid character, stop conversion

ProcessZero:
    shl eax, 1                                  ; Shift left to make room for new bit
    jmp NextChar                                ; Continue to next character

ProcessOne:
    shl eax, 1                                  ; Shift left to make room for new bit
    or eax, 1                                   ; Set the lowest bit
    jmp NextChar                                ; Continue to next character

SkipSpace:
    ; Do nothing for spaces, just continue

NextChar:
    inc esi                                     ; Move to next character
    jmp ConvertLoop                             ; Continue conversion loop

ConvertDone:
    mov inputValue, eax                         ; Store converted value
    ret                                         ; Return to caller

ConvertBinaryString ENDP

DisplayConversions PROC
    ; =====================================================================================
    ; Displays the input value in all three number bases with input format first
    ; Input: Value to convert in inputValue, input type in EAX
    ; Output: Formatted display of values with original input format shown first
    ; Memory Usage: Uses inputValue and display label variables
    ; Register Usage: EAX, EBX, EDX for display operations
    ; Functional Description: Shows conversion results header, then displays
    ;                        the original input format first, followed by other formats
    ; =====================================================================================
    
    mov ebx, eax                                ; Save input type in EBX
    call Crlf                                   ; Print blank line
    mov edx, OFFSET resultsHeader               ; Load results header address
    call WriteString                            ; Display results header
    
    ; Check input type and display original format first
    cmp ebx, DECIMAL_CHOICE                     ; Check if input was decimal
    je DisplayDecimalFirst                      ; Jump to decimal first display
    
    cmp ebx, HEX_CHOICE                         ; Check if input was hexadecimal
    je DisplayHexFirst                          ; Jump to hex first display
    
    cmp ebx, BINARY_CHOICE                      ; Check if input was binary
    je DisplayBinaryFirst                       ; Jump to binary first display
    
    ; Default case - show decimal first
    jmp DisplayDecimalFirst                     ; Default to decimal first

DisplayDecimalFirst:
    ; Display decimal value first
    mov edx, OFFSET decimalLabel                ; Load decimal label address
    call WriteString                            ; Display decimal label
    mov eax, inputValue                         ; Load input value
    call WriteInt                               ; Display signed decimal value
    call Crlf                                   ; Print new line
    
    ; Display hexadecimal value second
    mov edx, OFFSET hexLabel                    ; Load hex label address
    call WriteString                            ; Display hex label
    mov eax, inputValue                         ; Load input value
    call WriteHex                               ; Display hexadecimal value
    call Crlf                                   ; Print new line
    
    ; Display binary value third
    mov edx, OFFSET binaryLabel                 ; Load binary label address
    call WriteString                            ; Display binary label
    mov eax, inputValue                         ; Load input value
    call WriteBin                               ; Display binary value
    call Crlf                                   ; Print new line
    jmp DisplayDone                             ; Jump to end

DisplayHexFirst:
    ; Display hexadecimal value first
    mov edx, OFFSET hexLabel                    ; Load hex label address
    call WriteString                            ; Display hex label
    mov eax, inputValue                         ; Load input value
    call WriteHex                               ; Display hexadecimal value
    call Crlf                                   ; Print new line
    
    ; Display decimal value second
    mov edx, OFFSET decimalLabel                ; Load decimal label address
    call WriteString                            ; Display decimal label
    mov eax, inputValue                         ; Load input value
    call WriteInt                               ; Display signed decimal value
    call Crlf                                   ; Print new line
    
    ; Display binary value third
    mov edx, OFFSET binaryLabel                 ; Load binary label address
    call WriteString                            ; Display binary label
    mov eax, inputValue                         ; Load input value
    call WriteBin                               ; Display binary value
    call Crlf                                   ; Print new line
    jmp DisplayDone                             ; Jump to end

DisplayBinaryFirst:
    ; Display binary value first
    mov edx, OFFSET binaryLabel                 ; Load binary label address
    call WriteString                            ; Display binary label
    mov eax, inputValue                         ; Load input value
    call WriteBin                               ; Display binary value
    call Crlf                                   ; Print new line
    
    ; Display hexadecimal value second
    mov edx, OFFSET hexLabel                    ; Load hex label address
    call WriteString                            ; Display hex label
    mov eax, inputValue                         ; Load input value
    call WriteHex                               ; Display hexadecimal value
    call Crlf                                   ; Print new line
    
    ; Display decimal value third
    mov edx, OFFSET decimalLabel                ; Load decimal label address
    call WriteString                            ; Display decimal label
    mov eax, inputValue                         ; Load input value
    call WriteInt                               ; Display signed decimal value
    call Crlf                                   ; Print new line

DisplayDone:
    ret                                         ; Return to caller

DisplayConversions ENDP

END main