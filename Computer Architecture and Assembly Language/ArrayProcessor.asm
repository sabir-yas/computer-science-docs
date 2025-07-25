; ===============================================================================
; Program: Array Processing and Analysis
; Author: Yaseer Sabir
; Course: CSC2025.X40
; Date: 07/02/2025
; Description: This program prompts user for 25 integers, finds min/max values,
;              calculates average, separates odd/even values into sorted arrays,
;              and provides option to repeat the program.
; ===============================================================================

INCLUDE C:\Irvine\Irvine32.inc                                 ; Include Irvine32 macros
INCLUDELIB C:\Irvine\Irvine32.lib                            ; Link against Irvine32 library

.data
    ; Array constants
    ARRAY_SIZE = 25
    MAX_INPUT_SIZE = 100
    
    ; Main array and counters
    mainArray       DWORD ARRAY_SIZE DUP(?)     ; Primary 25-element array
    oddsArray       DWORD ARRAY_SIZE DUP(?)     ; Array to store odd values
    evensArray      DWORD ARRAY_SIZE DUP(?)     ; Array to store even values
    inputCount      DWORD 0                      ; Count of user inputs
    oddsCount       DWORD 0                      ; Count of odd values
    evensCount      DWORD 0                      ; Count of even values
    
    ; Statistical values
    minValue        DWORD 0                      ; Minimum array value
    maxValue        DWORD 0                      ; Maximum array value
    sumValue        DWORD 0                      ; Sum for average calculation
    avgValue        DWORD 0                      ; Average value
    
    ; User input and control
    userInput       DWORD 0                      ; Temporary input storage
    continueProgram BYTE 0                       ; Program continuation flag
    
    ; String prompts and messages
    welcomeMsg      BYTE "=== Array Processing Program ===", 0dh, 0ah, 0
    promptMsg       BYTE "Enter up to 25 non-negative integers (press Enter after each, -1 to stop early):", 0dh, 0ah, 0
    inputPrompt     BYTE "Enter integer #", 0
    colonSpace      BYTE ": ", 0
    minMsg          BYTE 0dh, 0ah, "Minimum value in array: ", 0
    maxMsg          BYTE 0dh, 0ah, "Maximum value in array: ", 0
    avgMsg          BYTE 0dh, 0ah, "Average value of array: ", 0
    oddsHeader      BYTE 0dh, 0ah, "Odd values (ascending order): ", 0
    evensHeader     BYTE 0dh, 0ah, "Even values (ascending order): ", 0
    arrayDisplay    BYTE "[", 0
    arrayEnd        BYTE "]", 0dh, 0ah, 0
    comma           BYTE ", ", 0
    continuePrompt  BYTE 0dh, 0ah, "Run program again? (1=Yes, 0=No): ", 0
    goodbyeMsg      BYTE 0dh, 0ah, "Thank you for using the Array Processing Program!", 0dh, 0ah, 0
    newline         BYTE 0dh, 0ah, 0

.code

; ===============================================================================
; Main Procedure
; Inputs: None
; Outputs: Console display of program results
; Memory Usage: Uses all global variables and arrays
; Register Usage: EAX, EBX, ECX, EDX for various operations
; Description: Controls program flow, handles user input, calls all procedures
; ===============================================================================
main PROC
    
ProgramLoop:
    call InitializeProgram          ; Reset all variables and arrays
    call GetUserInput              ; Get array input from user
    call FillRemainingElements     ; Fill unused elements if needed
    call FindMinMax                ; Find minimum and maximum values
    call CalculateAverage          ; Calculate array average
    call SeparateOddEven          ; Separate odd and even values
    call DisplayResults           ; Display all results
    call CheckContinue            ; Ask user to continue or quit
    
    cmp continueProgram, 1        ; Check if user wants to continue
    je ProgramLoop                ; Jump back to start if yes
    
    ; Display goodbye message and exit
    mov edx, OFFSET goodbyeMsg    ; Load goodbye message address
    call WriteString              ; Display goodbye message
    
    exit                          ; Exit program

main ENDP

; ===============================================================================
; InitializeProgram Procedure
; Inputs: None
; Outputs: Resets all global variables and arrays
; Memory Usage: Clears mainArray, oddsArray, evensArray
; Register Usage: EAX, ECX, EDI
; Description: Initializes all variables and arrays to zero for fresh program run
; ===============================================================================
InitializeProgram PROC
    
    ; Clear all counters and values
    mov inputCount, 0             ; Reset input counter
    mov oddsCount, 0              ; Reset odds counter
    mov evensCount, 0             ; Reset evens counter
    mov minValue, 0               ; Reset minimum value
    mov maxValue, 0               ; Reset maximum value
    mov sumValue, 0               ; Reset sum value
    mov avgValue, 0               ; Reset average value
    
    ; Clear main array
    mov edi, OFFSET mainArray     ; Point to main array
    mov ecx, ARRAY_SIZE           ; Set loop counter
    mov eax, 0                    ; Value to store (zero)
ClearMainLoop:
    mov [edi], eax                ; Store zero in current element
    add edi, 4                    ; Move to next DWORD
    loop ClearMainLoop            ; Continue until all elements cleared
    
    ; Clear odds array
    mov edi, OFFSET oddsArray     ; Point to odds array
    mov ecx, ARRAY_SIZE           ; Set loop counter
ClearOddsLoop:
    mov [edi], eax                ; Store zero in current element
    add edi, 4                    ; Move to next DWORD
    loop ClearOddsLoop            ; Continue until all elements cleared
    
    ; Clear evens array
    mov edi, OFFSET evensArray    ; Point to evens array
    mov ecx, ARRAY_SIZE           ; Set loop counter
ClearEvensLoop:
    mov [edi], eax                ; Store zero in current element
    add edi, 4                    ; Move to next DWORD
    loop ClearEvensLoop           ; Continue until all elements cleared
    
    ret                           ; Return to caller

InitializeProgram ENDP

; ===============================================================================
; GetUserInput Procedure
; Inputs: User keyboard input
; Outputs: Populates mainArray with user values
; Memory Usage: Writes to mainArray, updates inputCount
; Register Usage: EAX, EBX, ECX, EDX, ESI
; Description: Prompts user for up to 25 integers and stores them in mainArray
; ===============================================================================
GetUserInput PROC
    
    ; Display welcome and prompt messages
    mov edx, OFFSET welcomeMsg    ; Load welcome message address
    call WriteString              ; Display welcome message
    mov edx, OFFSET promptMsg     ; Load prompt message address
    call WriteString              ; Display input prompt
    
    mov ecx, ARRAY_SIZE           ; Set maximum input count
    mov esi, OFFSET mainArray     ; Point to main array
    mov ebx, 1                    ; Input counter for display
    
InputLoop:
    ; Display input prompt with number
    mov edx, OFFSET inputPrompt   ; Load input prompt
    call WriteString              ; Display prompt
    mov eax, ebx                  ; Load current input number
    call WriteDec                 ; Display input number
    mov edx, OFFSET colonSpace    ; Load colon and space
    call WriteString              ; Display colon and space
    
    ; Get user input
    call ReadInt                  ; Read integer from user
    cmp eax, -1                   ; Check for early termination
    je InputComplete              ; Jump if user wants to stop
    
    ; Store valid input
    mov [esi], eax                ; Store input in array
    add esi, 4                    ; Move to next array element
    inc inputCount                ; Increment input counter
    inc ebx                       ; Increment display counter
    
    loop InputLoop                ; Continue for next input
    
InputComplete:
    ret                           ; Return to caller

GetUserInput ENDP

; ===============================================================================
; FillRemainingElements Procedure
; Inputs: inputCount (number of elements entered by user)
; Outputs: Fills remaining array elements with sequential values
; Memory Usage: Writes to remaining elements of mainArray
; Register Usage: EAX, ECX, ESI
; Description: Fills unused array elements with sequential values starting from 1
; ===============================================================================
FillRemainingElements PROC
    
    mov ecx, ARRAY_SIZE           ; Total array size
    sub ecx, inputCount           ; Calculate remaining elements
    cmp ecx, 0                    ; Check if any elements need filling
    je FillComplete               ; Skip if array is full
    
    ; Calculate starting position in array
    mov eax, inputCount           ; Get number of inputs
    mov esi, OFFSET mainArray     ; Point to array start
    shl eax, 2                    ; Multiply by 4 (DWORD size)
    add esi, eax                  ; Point to first unfilled element
    
    mov eax, 1                    ; Start sequential values from 1
    
FillLoop:
    mov [esi], eax                ; Store sequential value
    add esi, 4                    ; Move to next element
    inc eax                       ; Increment sequential value
    loop FillLoop                 ; Continue until all filled
    
FillComplete:
    ret                           ; Return to caller

FillRemainingElements ENDP

; ===============================================================================
; FindMinMax Procedure
; Inputs: mainArray (25 elements)
; Outputs: Sets minValue and maxValue global variables
; Memory Usage: Reads from mainArray, writes to minValue and maxValue
; Register Usage: EAX, ECX, ESI
; Description: Traverses array to find minimum and maximum values
; ===============================================================================
FindMinMax PROC
    
    mov esi, OFFSET mainArray     ; Point to array start
    mov eax, [esi]                ; Load first element
    mov minValue, eax             ; Initialize minimum value
    mov maxValue, eax             ; Initialize maximum value
    
    add esi, 4                    ; Move to second element
    mov ecx, ARRAY_SIZE - 1       ; Set loop counter (n-1 elements)
    
CompareLoop:
    mov eax, [esi]                ; Load current element
    
    ; Check for new minimum
    cmp eax, minValue             ; Compare with current minimum
    jge CheckMax                  ; Jump if not smaller
    mov minValue, eax             ; Update minimum value
    
CheckMax:
    ; Check for new maximum
    cmp eax, maxValue             ; Compare with current maximum
    jle NextElement               ; Jump if not larger
    mov maxValue, eax             ; Update maximum value
    
NextElement:
    add esi, 4                    ; Move to next element
    loop CompareLoop              ; Continue until all checked
    
    ret                           ; Return to caller

FindMinMax ENDP

; ===============================================================================
; CalculateAverage Procedure
; Inputs: mainArray (25 elements)
; Outputs: Sets avgValue global variable
; Memory Usage: Reads from mainArray, writes to sumValue and avgValue
; Register Usage: EAX, ECX, EDX, ESI
; Description: Calculates sum of all array elements and computes average
; ===============================================================================
CalculateAverage PROC
    
    mov esi, OFFSET mainArray     ; Point to array start
    mov eax, 0                    ; Initialize sum
    mov ecx, ARRAY_SIZE           ; Set loop counter
    
SumLoop:
    add eax, [esi]                ; Add current element to sum
    add esi, 4                    ; Move to next element
    loop SumLoop                  ; Continue until all added
    
    mov sumValue, eax             ; Store total sum
    
    ; Calculate average (sum / count)
    mov edx, 0                    ; Clear upper 32 bits for division
    mov ecx, ARRAY_SIZE           ; Load divisor
    div ecx                       ; Divide sum by array size
    mov avgValue, eax             ; Store average value
    
    ret                           ; Return to caller

CalculateAverage ENDP

; ===============================================================================
; SeparateOddEven Function
; Inputs: mainArray (25 elements)
; Outputs: Populates oddsArray and evensArray with sorted values
; Memory Usage: Reads mainArray, writes to oddsArray and evensArray
; Register Usage: EAX, EBX, ECX, EDX, ESI, EDI
; Description: Separates odd and even values into separate arrays and sorts them
; ===============================================================================
SeparateOddEven PROC
    
    ; First pass: separate odd and even values
    mov esi, OFFSET mainArray     ; Point to source array
    mov ecx, ARRAY_SIZE           ; Set loop counter
    
SeparateLoop:
    mov eax, [esi]                ; Load current element
    mov edx, 0                    ; Clear upper bits
    mov ebx, 2                    ; Divisor for odd/even check
    div ebx                       ; Divide by 2
    
    cmp edx, 0                    ; Check remainder
    je StoreEven                  ; Jump if even (remainder = 0)
    
    ; Store odd value
    mov eax, [esi]                ; Reload original value
    mov edi, OFFSET oddsArray     ; Point to odds array
    mov ebx, oddsCount            ; Get current odds count
    shl ebx, 2                    ; Multiply by 4 for DWORD indexing
    add edi, ebx                  ; Point to next available slot
    mov [edi], eax                ; Store odd value
    inc oddsCount                 ; Increment odds counter
    jmp NextSeparate              ; Continue to next element
    
StoreEven:
    ; Store even value
    mov eax, [esi]                ; Reload original value
    mov edi, OFFSET evensArray    ; Point to evens array
    mov ebx, evensCount           ; Get current evens count
    shl ebx, 2                    ; Multiply by 4 for DWORD indexing
    add edi, ebx                  ; Point to next available slot
    mov [edi], eax                ; Store even value
    inc evensCount                ; Increment evens counter
    
NextSeparate:
    add esi, 4                    ; Move to next element
    loop SeparateLoop             ; Continue until all processed
    
    ; Sort odds array
    mov esi, OFFSET oddsArray     ; Array to sort
    mov ecx, oddsCount            ; Number of elements
    call SortArray                ; Sort the odds array
    
    ; Sort evens array
    mov esi, OFFSET evensArray    ; Array to sort
    mov ecx, evensCount           ; Number of elements
    call SortArray                ; Sort the evens array
    
    ret                           ; Return to caller

SeparateOddEven ENDP

; ===============================================================================
; SortArray Procedure
; Inputs: ESI = array address, ECX = number of elements
; Outputs: Sorts array in ascending order
; Memory Usage: Modifies array pointed to by ESI
; Register Usage: EAX, EBX, ECX, EDX, ESI, EDI
; Description: Implements bubble sort algorithm for ascending order
; ===============================================================================
SortArray PROC
    
    cmp ecx, 1                    ; Check if array has 0 or 1 elements
    jle SortComplete              ; Skip sorting if too small
    
    mov edx, ecx                  ; Outer loop counter
    dec edx                       ; n-1 passes needed
    
OuterLoop:
    mov edi, esi                  ; Reset to array start
    mov ecx, edx                  ; Inner loop counter
    
InnerLoop:
    mov eax, [edi]                ; Load current element
    mov ebx, [edi + 4]            ; Load next element
    cmp eax, ebx                  ; Compare elements
    jle NoSwap                    ; Skip if in correct order
    
    ; Swap elements
    mov [edi], ebx                ; Store smaller element first
    mov [edi + 4], eax            ; Store larger element second
    
NoSwap:
    add edi, 4                    ; Move to next pair
    loop InnerLoop                ; Continue inner loop
    
    dec edx                       ; Decrement outer counter
    jnz OuterLoop                 ; Continue if more passes needed
    
SortComplete:
    ret                           ; Return to caller

SortArray ENDP

; ===============================================================================
; DisplayResults Procedure
; Inputs: All global result variables and arrays
; Outputs: Console display of all program results
; Memory Usage: Reads from all result variables and arrays
; Register Usage: EAX, ECX, EDX, ESI
; Description: Displays minimum, maximum, average, and sorted odd/even arrays
; ===============================================================================
DisplayResults PROC
    
    ; Display minimum value
    mov edx, OFFSET minMsg        ; Load minimum message
    call WriteString              ; Display message
    mov eax, minValue             ; Load minimum value
    call WriteDec                 ; Display minimum value
    
    ; Display maximum value
    mov edx, OFFSET maxMsg        ; Load maximum message
    call WriteString              ; Display message
    mov eax, maxValue             ; Load maximum value
    call WriteDec                 ; Display maximum value
    
    ; Display average value
    mov edx, OFFSET avgMsg        ; Load average message
    call WriteString              ; Display message
    mov eax, avgValue             ; Load average value
    call WriteDec                 ; Display average value
    
    ; Display odds array
    mov edx, OFFSET oddsHeader    ; Load odds header
    call WriteString              ; Display header
    mov esi, OFFSET oddsArray     ; Point to odds array
    mov ecx, oddsCount            ; Number of odd elements
    call DisplayArray             ; Display the odds array
    
    ; Display evens array
    mov edx, OFFSET evensHeader   ; Load evens header
    call WriteString              ; Display header
    mov esi, OFFSET evensArray    ; Point to evens array
    mov ecx, evensCount           ; Number of even elements
    call DisplayArray             ; Display the evens array
    
    ret                           ; Return to caller

DisplayResults ENDP

; ===============================================================================
; DisplayArray Procedure
; Inputs: ESI = array address, ECX = number of elements
; Outputs: Console display of array in bracketed format
; Memory Usage: Reads from array pointed to by ESI
; Register Usage: EAX, ECX, EDX, ESI
; Description: Displays array elements in format [elem1, elem2, elem3, ...]
; ===============================================================================
DisplayArray PROC
    
    ; Display opening bracket
    mov edx, OFFSET arrayDisplay  ; Load opening bracket
    call WriteString              ; Display opening bracket
    
    cmp ecx, 0                    ; Check if array is empty
    je DisplayClosing             ; Skip to closing if empty
    
DisplayLoop:
    mov eax, [esi]                ; Load current element
    call WriteDec                 ; Display element value
    
    add esi, 4                    ; Move to next element
    dec ecx                       ; Decrement counter
    jz DisplayClosing             ; Skip comma if last element
    
    ; Display comma separator
    mov edx, OFFSET comma         ; Load comma and space
    call WriteString              ; Display separator
    jmp DisplayLoop               ; Continue with next element
    
DisplayClosing:
    ; Display closing bracket
    mov edx, OFFSET arrayEnd      ; Load closing bracket and newline
    call WriteString              ; Display closing bracket
    
    ret                           ; Return to caller

DisplayArray ENDP

; ===============================================================================
; CheckContinue Procedure
; Inputs: User keyboard input
; Outputs: Sets continueProgram flag
; Memory Usage: Writes to continueProgram variable
; Register Usage: EAX, EDX
; Description: Prompts user whether to run program again and sets control flag
; ===============================================================================
CheckContinue PROC
    
    ; Prompt user for continuation
    mov edx, OFFSET continuePrompt ; Load continuation prompt
    call WriteString              ; Display prompt
    call ReadInt                  ; Get user response
    
    ; Set continuation flag
    cmp eax, 1                    ; Check if user entered 1
    je SetContinue                ; Jump if user wants to continue
    mov continueProgram, 0        ; Set flag to stop program
    jmp CheckComplete             ; Jump to end
    
SetContinue:
    mov continueProgram, 1        ; Set flag to continue program
    
CheckComplete:
    ret                           ; Return to caller

CheckContinue ENDP

END main