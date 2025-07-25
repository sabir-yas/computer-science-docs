; NAME: [Your Name Here]
; COURSE NUMBER/SECTION/TITLE: [e.g., CS 301/001/Assembly Language Programming]
; PROGRAM TITLE: Hangman Game
; DATE: July 19, 2025

INCLUDE C:\Irvine\Irvine32.inc                                 ; Include Irvine32 macros
INCLUDELIB C:\Irvine\Irvine32.lib                            ; Link against Irvine32 library


; *****************************************************************************
; Procedure: main
; Inputs: None
; Outputs: None (displays game output to console)
; Memory Usage: Uses .data section for strings and variables, stack for local variables
;               during procedure calls.
; Register Usage: EAX, EBX, ECX, EDX for general purpose, ESI, EDI for string operations.
; Functional Description:
;   This is the main entry point of the Hangman game. It initializes the game,
;   enters the main game loop, handles user input, updates the game state,
;   and determines game win/loss conditions. It also provides an option to play again.
; *****************************************************************************

.data
    ; Game configuration
    MIN_WORD_LENGTH     DWORD 6             ; Minimum length for words
    MAX_INCORRECT_GUESSES DWORD 6           ; Maximum incorrect guesses (Head, Body, LA, RA, LL, RL)

    ; Words for the game
    word1               BYTE "PROGRAMMING",0    ; Word 1
    word2               BYTE "ASSEMBLY",0      ; Word 2
    word3               BYTE "COMPUTER",0      ; Word 3
    word4               BYTE "ALGORITHM",0     ; Word 4
    word5               BYTE "DEVELOPER",0     ; Word 5
    word6               BYTE "DEBUGGING",0     ; Word 6
    word7               BYTE "OPERATING",0     ; Word 7
    word8               BYTE "HARDWARE",0      ; Word 8
    word9               BYTE "SOFTWARE",0      ; Word 9
    word10              BYTE "KEYBOARD",0      ; Word 10
    word_count          DWORD 10            ; Number of words available

    word_pointers       DWORD OFFSET word1, OFFSET word2, OFFSET word3, OFFSET word4, OFFSET word5
                        DWORD OFFSET word6, OFFSET word7, OFFSET word8, OFFSET word9, OFFSET word10 ; Array of word pointers

    ; Game state variables
    current_word_ptr    DWORD ?             ; Pointer to the currently selected word
    current_word_length DWORD ?             ; Length of the current word
    guessed_word_display BYTE 80 DUP (?)    ; Stores the word display (underscores/letters)
    incorrect_guesses   DWORD ?             ; Counter for incorrect guesses
    guessed_letters_list BYTE 27 DUP (?)    ; Stores incorrectly guessed letters (A-Z, plus null terminator)
    guessed_letters_count DWORD 0           ; Count of unique incorrectly guessed letters
    letters_to_guess    DWORD ?             ; Number of letters still to be guessed correctly

    ; Messages
    prompt_guess_msg    BYTE "Guess a letter: ",0           ; Prompt for letter guess
    correct_guess_msg   BYTE "Correct guess! Keep going!",0  ; Message for correct guess
    incorrect_guess_msg BYTE "Incorrect guess!",0           ; Message for incorrect guess
    game_over_loss_msg  BYTE "Game Over! You lost. The word was: ",0 ; Loss message
    game_over_win_msg   BYTE "Congratulations! You won!",0   ; Win message
    play_again_prompt   BYTE "Do you want to play again? (Y/N): ",0 ; Play again prompt
    invalid_input_msg   BYTE "Invalid input. Please enter a letter (A-Z).",0 ; Invalid input message
    already_guessed_msg BYTE "You already guessed that letter. Try another one.",0 ; Already guessed message
    newline             BYTE CR,LF,0                        ; Newline characters

    ; Hangman body parts
    body_parts          BYTE "Head",0
                        BYTE "Body",0
                        BYTE "Left Arm",0
                        BYTE "Right Arm",0
                        BYTE "Left Leg",0
                        BYTE "Right Leg",0
    body_part_pointers  DWORD OFFSET body_parts, OFFSET body_parts + 5, OFFSET body_parts + 10, OFFSET body_parts + 20, OFFSET body_parts + 31, OFFSET body_parts + 40 ; Pointers to body part strings
    body_part_sizes     DWORD 4, 4, 8, 9, 8, 9 ; Lengths of body part strings

.code
main PROC
    CALL Clrscr                         ; Clear the screen

main_game_loop:
    ; Initialize game variables for a new round
    MOV EAX, 0                          ; EAX = 0
    MOV guessed_letters_count, EAX      ; Reset guessed letters count
    MOV incorrect_guesses, EAX          ; Reset incorrect guesses
    MOV ECX, SIZEOF guessed_letters_list ; ECX = size of guessed_letters_list
    MOV AL, 0                           ; AL = 0 (null terminator)
    MOV EDI, OFFSET guessed_letters_list ; EDI = address of guessed_letters_list
    REP STOSB                           ; Clear guessed_letters_list with nulls

    ; Select a random word
    CALL Randomize                      ; Seed the random number generator
    MOV EAX, word_count                 ; EAX = number of words
    CALL RandomRange                    ; EAX = random number from 0 to word_count - 1
    MOV EBX, EAX                        ; EBX = random index
    MOV ESI, OFFSET word_pointers       ; ESI = address of word_pointers array
    MOV EAX, [ESI + EBX * TYPE word_pointers] ; EAX = pointer to selected word
    MOV current_word_ptr, EAX           ; Store selected word pointer

    ; Get word length and initialize display with underscores
    MOV EDI, current_word_ptr           ; EDI = address of current word
    MOV ECX, 0                          ; ECX = 0 (counter for length)
    count_word_length:
        CMP BYTE PTR [EDI], 0           ; Compare byte at EDI with null terminator
        JE end_count_word_length        ; If null, end loop
        INC ECX                         ; Increment length counter
        INC EDI                         ; Move to next character
        JMP count_word_length           ; Loop
    end_count_word_length:
    MOV current_word_length, ECX        ; Store word length
    MOV letters_to_guess, ECX           ; Initialize letters_to_guess with word length

    MOV ESI, OFFSET guessed_word_display ; ESI = address of display buffer
    MOV ECX, current_word_length        ; ECX = word length
    MOV AL, '_'                         ; AL = underscore character
    init_display_loop:
        STOSB                           ; Store underscore
        LOOP init_display_loop          ; Loop until ECX is 0
    MOV BYTE PTR [ESI], 0               ; Null terminate the display string

    game_round_loop:
        CALL Clrscr                     ; Clear screen for fresh display
        CALL DisplayHangmanState        ; Display current hangman (body parts)
        CALL DisplayWordProgress        ; Display current word progress (e.g., _ P P L _)
        CALL DisplayIncorrectLetters    ; Display incorrectly guessed letters

        ; Check for win/loss conditions
        CMP letters_to_guess, 0         ; Compare letters to guess with 0
        JE game_win                     ; If 0, user won
        CMP incorrect_guesses, MAX_INCORRECT_GUESSES ; Compare incorrect guesses with max
        JAE game_loss                   ; If >= max, user lost

        ; Prompt for guess
        MOV EDX, OFFSET prompt_guess_msg ; EDX = address of prompt
        CALL WriteString                ; Display prompt
        CALL ReadChar                   ; Read a character into AL
        CALL UprCase                    ; Convert to uppercase (case-insensitive)

        ; Validate input (ensure it's an alphabet letter)
        CMP AL, 'A'                     ; Compare with 'A'
        JB invalid_input                ; If less, invalid
        CMP AL, 'Z'                     ; Compare with 'Z'
        JA invalid_input                ; If greater, invalid

        ; Check if letter was already guessed incorrectly
        MOV ESI, OFFSET guessed_letters_list ; ESI = address of guessed letters list
        MOV ECX, guessed_letters_count  ; ECX = count of guessed letters
        MOV DL, AL                      ; DL = current guessed letter
        check_already_guessed:
            CMP ECX, 0                  ; Check if all checked
            JE not_already_guessed      ; If ECX is 0, not found
            CMP BYTE PTR [ESI], DL      ; Compare current list char with guessed char
            JE already_guessed          ; If match, already guessed
            INC ESI                     ; Move to next char in list
            LOOP check_already_guessed  ; Loop
        not_already_guessed:

        ; Check if the letter is in the word
        MOV ESI, current_word_ptr       ; ESI = address of current word
        MOV EDI, OFFSET guessed_word_display ; EDI = address of display buffer
        MOV ECX, current_word_length    ; ECX = word length
        MOV BL, AL                      ; BL = guessed letter
        MOV EAX, 0                      ; EAX = flag for correct guess (0 = no, 1 = yes)
        check_letter_in_word:
            CMP ECX, 0                  ; Check if all characters checked
            JE end_check_letter_in_word ; If ECX is 0, end loop
            MOV DL, BYTE PTR [ESI]      ; DL = character from current word
            CALL UprCase                ; Convert to uppercase for comparison
            CMP DL, BL                  ; Compare word char with guessed letter
            JNE next_char_check         ; If not equal, check next char
            CMP BYTE PTR [EDI], '_'     ; Check if already revealed
            JNE next_char_check         ; If not underscore, already revealed
            MOV BYTE PTR [EDI], BL      ; Place correct letter in display
            DEC letters_to_guess        ; Decrement letters to guess
            MOV EAX, 1                  ; Set correct guess flag
        next_char_check:
            INC ESI                     ; Move to next char in word
            INC EDI                     ; Move to next char in display
            LOOP check_letter_in_word   ; Loop
        end_check_letter_in_word:

        CMP EAX, 1                      ; Check correct guess flag
        JE correct_guess_made           ; If 1, correct guess
        JMP incorrect_guess_made        ; Otherwise, incorrect guess

    invalid_input:
        MOV EDX, OFFSET invalid_input_msg ; EDX = address of invalid input message
        CALL WriteString                ; Display message
        CALL Crlf                       ; Newline
        JMP game_round_loop             ; Prompt again

    already_guessed:
        MOV EDX, OFFSET already_guessed_msg ; EDX = address of already guessed message
        CALL WriteString                ; Display message
        CALL Crlf                       ; Newline
        JMP game_round_loop             ; Prompt again

    correct_guess_made:
        MOV EDX, OFFSET correct_guess_msg ; EDX = address of correct guess message
        CALL WriteString                ; Display message
        CALL Crlf                       ; Newline
        JMP game_round_loop             ; Continue game

    incorrect_guess_made:
        INC incorrect_guesses           ; Increment incorrect guesses
        ; Add guessed letter to list of incorrect letters
        MOV EAX, guessed_letters_count  ; EAX = current count
        MOV EDI, OFFSET guessed_letters_list ; EDI = address of list
        ADD EDI, EAX                    ; EDI = address of next available slot
        MOV BYTE PTR [EDI], BL          ; Store the guessed letter
        INC guessed_letters_count       ; Increment count
        MOV BYTE PTR [EDI+1], 0         ; Null terminate the list for safety

        MOV EDX, OFFSET incorrect_guess_msg ; EDX = address of incorrect guess message
        CALL WriteString                ; Display message
        CALL Crlf                       ; Newline
        JMP game_round_loop             ; Continue game

game_win:
    CALL Clrscr                         ; Clear screen
    CALL DisplayWordProgress            ; Display final word
    MOV EDX, OFFSET game_over_win_msg   ; EDX = address of win message
    CALL WriteString                    ; Display win message
    CALL Crlf                           ; Newline
    JMP play_again                      ; Offer to play again

game_loss:
    CALL Clrscr                         ; Clear screen
    CALL DisplayHangmanState            ; Display final hangman
    MOV EDX, OFFSET game_over_loss_msg  ; EDX = address of loss message
    CALL WriteString                    ; Display loss message
    MOV EDX, current_word_ptr           ; EDX = address of actual word
    CALL WriteString                    ; Display the actual word
    CALL Crlf                           ; Newline
    CALL DisplayIncorrectLetters        ; Display incorrect letters
    JMP play_again                      ; Offer to play again

play_again:
    MOV EDX, OFFSET play_again_prompt   ; EDX = address of play again prompt
    CALL WriteString                    ; Display prompt
    CALL ReadChar                       ; Read character into AL
    CALL UprCase                        ; Convert to uppercase
    CMP AL, 'Y'                         ; Compare with 'Y'
    JE main_game_loop                   ; If 'Y', play again
    CMP AL, 'N'                         ; Compare with 'N'
    JE exit_program                     ; If 'N', exit
    JMP play_again                      ; Otherwise, prompt again (invalid input)

exit_program:
    EXIT                                ; Terminate the program
main ENDP

; *****************************************************************************
; Procedure: DisplayWordProgress
; Inputs: guessed_word_display (global variable)
; Outputs: Displays the current state of the guessed word to the console.
; Memory Usage: Reads from guessed_word_display.
; Register Usage: EDX for string address.
; Functional Description:
;   This procedure prints the `guessed_word_display` string to the console,
;   which shows the correctly guessed letters in their positions and underscores
;   for unguessed letters.
; *****************************************************************************
DisplayWordProgress PROC
    MOV EDX, OFFSET guessed_word_display ; EDX = address of the display string
    CALL WriteString                    ; Print the string
    CALL Crlf                           ; Newline
    CALL Crlf                           ; Another newline for spacing
    RET
DisplayWordProgress ENDP

; *****************************************************************************
; Procedure: DisplayHangmanState
; Inputs: incorrect_guesses (global variable), body_part_pointers, body_part_sizes
; Outputs: Displays the current hangman body parts to the console.
; Memory Usage: Reads from global variables.
; Register Usage: EAX, EBX, ECX, EDX, ESI.
; Functional Description:
;   This procedure iterates through the `body_part_pointers` array up to the
;   number of `incorrect_guesses` and prints each corresponding body part string
;   (e.g., "Head", "Body").
; *****************************************************************************
DisplayHangmanState PROC
    MOV EAX, incorrect_guesses          ; EAX = number of incorrect guesses
    CMP EAX, 0                          ; If EAX is 0, no body parts yet
    JE NoBodyParts                      ; Skip if no body parts
    MOV ECX, EAX                        ; ECX = loop counter (number of body parts to display)
    MOV ESI, OFFSET body_part_pointers  ; ESI = address of array of body part pointers
    MOV EBX, OFFSET body_part_sizes     ; EBX = address of array of body part sizes
    display_body_parts_loop:
        MOV EDX, [ESI]                  ; EDX = pointer to current body part string
        CALL WriteString                ; Print the body part string
        CALL Crlf                       ; Newline
        ADD ESI, TYPE body_part_pointers ; Move to next pointer in array
        ADD EBX, TYPE body_part_sizes   ; Move to next size in array
        LOOP display_body_parts_loop    ; Loop until ECX is 0
    NoBodyParts:
    CALL Crlf                           ; Newline for spacing
    RET
DisplayHangmanState ENDP

; *****************************************************************************
; Procedure: DisplayIncorrectLetters
; Inputs: guessed_letters_list (global variable), guessed_letters_count
; Outputs: Displays the list of incorrectly guessed letters to the console.
; Memory Usage: Reads from guessed_letters_list.
; Register Usage: EDX for string address.
; Functional Description:
;   This procedure prints the `guessed_letters_list` string, which contains
;   all the unique letters the user has guessed incorrectly.
; *****************************************************************************
DisplayIncorrectLetters PROC
    MOV EDX, OFFSET guessed_letters_list ; EDX = address of incorrect letters list
    MOV EAX, guessed_letters_count      ; EAX = count of incorrect letters
    CMP EAX, 0                          ; Check if any incorrect letters
    JE NoIncorrectLetters               ; If 0, skip
    MOV EDX, OFFSET newline             ; Print a newline for formatting
    CALL WriteString
    MOV EDX, OFFSET guessed_letters_list ; Print the list of incorrect letters
    CALL WriteString
    NoIncorrectLetters:
    CALL Crlf                           ; Newline
    CALL Crlf                           ; Another newline for spacing
    RET
DisplayIncorrectLetters ENDP

END main