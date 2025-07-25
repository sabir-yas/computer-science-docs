;----------------------------------------------------------
; Name:        Yaseer Sabir                          ; Your full name
; Course:      CSC2025 - Computer Architecture and    ; Course number and title
;              Assembly Language                      ; 
; Program:     HW3 Part 2 – Number Guessing Game       ; Program title
; Date:        06/06/2025                             ; Date of creation
; Description: Generates a random number between 1     ; Brief description of program
;              and 50 and lets the user guess within 10
;              tries, with feedback and replay option
;----------------------------------------------------------

INCLUDE Irvine32.inc                                 ; Include Irvine32 macros and procedures
INCLUDELIB Irvine32.lib                              ; Link against Irvine32 library

.data
promptGuess     BYTE    "Guess a number between 1 and 50: ",0  ; Prompt for user guess
errorInput      BYTE    "Invalid input. Guess must be 1–50 and numeric.",0Dh,0Ah,0  ; Error for out-of-range or non-numeric
msgTooLow       BYTE    "Too low! Try again.",0Dh,0Ah,0      ; Feedback when guess < target
msgTooHigh      BYTE    "Too high! Try again.",0Dh,0Ah,0     ; Feedback when guess > target
msgCorrect      BYTE    "Congratulations! You guessed it right.",0Dh,0Ah,0  ; Success message
msgTriesOver    BYTE    "Sorry, you used all your tries. The correct number was ",0 ; Message when out of attempts
msgTryAgain     BYTE    "Would you like to play again (y/n)? ",0 ; Prompt to replay
newline         BYTE    0Dh,0Ah,0                      ; Newline sequence

randSeed        DWORD   ?                             ; Seed value for RNG (unused placeholder)
targetNumber    DWORD   ?                             ; Stores randomly generated target
guessCount      DWORD   ?                             ; Tracks number of guesses attempted
userGuess       DWORD   ?                             ; Stores user's current guess
response        BYTE    ?                             ; Stores user response for replay

.code
;----------------------------------------------------------
; Procedure: main                                       ; Entry point of program
; Inputs:    Keyboard input (integer guess, char replay)
; Outputs:   Console messages (prompts, feedback, results)
; Memory:    targetNumber, guessCount, userGuess, response
; Registers: eax (random/guess), ebx (target), edx (string ptr)
; Desc:      Seeds RNG, generates target, loops for up to
;            10 guesses, gives feedback, handles invalid input,
;            displays result, and prompts to replay
;----------------------------------------------------------
main PROC

    ; --- Start game loop ---
playAgain:
    call    Randomize               ; Seed RNG with current system time
    call    Crlf                    ; Print blank line for spacing

    mov     eax,50                  ; Set upper bound (50) for random range
    call    RandomRange             ; Generate random number 0–49 in eax
    add     eax,1                   ; Adjust range to 1–50
    mov     targetNumber,eax        ; Save generated target number
    mov     guessCount,0            ; Reset guess counter to zero

nextGuess:
    cmp     guessCount,10           ; Compare guesses used with limit (10)
    jge     outOfTries              ; If >= 10, jump to outOfTries handler

    mov     edx,OFFSET promptGuess  ; Load address of guess prompt string
    call    WriteString             ; Display prompt to console
    call    ReadInt                 ; Read integer input into eax
    mov     userGuess,eax           ; Store user guess in memory

    cmp     eax,1                   ; Check if guess < 1
    jl      invalidInput            ; If below valid range, handle error
    cmp     eax,50                  ; Check if guess > 50
    jg      invalidInput            ; If above valid range, handle error

    inc     guessCount              ; Valid guess: increment guess counter

    mov     eax,userGuess           ; Load guess into eax for comparison
    mov     ebx,targetNumber        ; Load target number into ebx
    cmp     eax,ebx                 ; Compare guess vs. target
    je      guessedCorrect          ; If equal, jump to success handler
    jl      tooLow                  ; If guess < target, jump to tooLow

    ; Guess is higher than target
    mov     edx,OFFSET msgTooHigh   ; Load "Too high" message address
    call    WriteString             ; Display "Too high" feedback
    jmp     nextGuess               ; Loop back for next guess

tooLow:
    mov     edx,OFFSET msgTooLow    ; Load "Too low" message address
    call    WriteString             ; Display "Too low" feedback
    jmp     nextGuess               ; Loop back for next guess

invalidInput:
    mov     edx,OFFSET errorInput   ; Load invalid input error message
    call    WriteString             ; Display error message to user
    inc     guessCount              ; Count invalid input as an attempt
    jmp     nextGuess               ; Loop back for next guess

outOfTries:
    mov     edx,OFFSET msgTriesOver ; Load "out of tries" message
    call    WriteString             ; Display tries-over message
    mov     eax,targetNumber        ; Load correct number into eax
    call    WriteInt                ; Display the correct number
    call    Crlf                    ; Print newline
    jmp     askReplay               ; Jump to replay prompt

guessedCorrect:
    mov     edx,OFFSET msgCorrect   ; Load success message
    call    WriteString             ; Display congratulations message

askReplay:
    mov     edx,OFFSET msgTryAgain  ; Load replay prompt message
    call    WriteString             ; Display prompt to user
    call    ReadChar                ; Read single char response into al
    call    Crlf                    ; Print newline for neatness
    movzx   eax,al                  ; Zero-extend response char into eax
    or      al,32                   ; Convert to lowercase ('Y' or 'y')
    cmp     al,'y'                  ; Compare with 'y'
    je      playAgain               ; If user chose 'y', restart game loop

    exit                            ; Exit program when user chooses not to replay
main ENDP

END main                            ; End of program
