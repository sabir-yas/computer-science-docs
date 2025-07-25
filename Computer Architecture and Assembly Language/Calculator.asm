; ----------------------------------------------------------
; Author:   Yaseer Sabir                        
; Course:   CSC2025.X40
; Title:    Integer Calculator (32-bit MASM)
; Date:     June 26, 2025
; Purpose:  Console program that repeatedly      ; high-level overview
;           requests two 16-bit signed integers,
;           displays a menu (Add, Sub, Mul, Div),
;           performs the chosen operation, and
;           shows the result (quotient + remainder
;           for division) until the user exits.
; ----------------------------------------------------------

INCLUDE C:\Irvine\Irvine32.inc          ; bring in Irvine32 macros / proto’s
INCLUDELIB C:\Irvine\Irvine32.lib       ; link against Irvine32 static lib

; ----------------------  DATA SEGMENT  --------------------
.data
menuTitle       BYTE "Choose an operation:",0                 ; menu header
menuOptions     BYTE "(1) Addition",13,10,                    ; +
                     "(2) Subtraction",13,10,                 ; –
                     "(3) Multiplication",13,10,              ; ×
                     "(4) Division",13,10,                    ; ÷
                     "(5) Exit",13,10,0                       ; quit
prompt1         BYTE "Please enter an integer value up to 16 bits in size: ",0
prompt2         BYTE "Please enter another integer value up to 16 bits in size: ",0
menuPrompt      BYTE "Please choose one of the menu options: ",0
resultMsg       BYTE 13,10,"Computation Result:",13,10,0
sumLabel        BYTE "The sum of ",0
diffLabel       BYTE "The difference of ",0
prodLabel       BYTE "The product of ",0
divLabel        BYTE "The result of ",0
andLabel        BYTE " and ",0
isLabel         BYTE " is ",0
quotientLabel   BYTE " with a remainder of ",0

num1            SDWORD ?                                       ; first input
num2            SDWORD ?                                       ; second input
result          SDWORD ?                                       ; result / quotient
remainder       SDWORD ?                                       ; remainder (DIV)
choice          DWORD  ?                                       ; menu selection
; ----------------------------------------------------------

.code
; ==========================================================
; PROC: main
; Inputs : user keyboard (ReadInt) ? num1, num2, menu option
; Outputs: formatted text via WriteString / WriteInt
; Uses   : EAX, EBX, ECX, EDX (saved only as scratch)
; ==========================================================
main PROC

start:                                                          ; ?? 1st prompt
    mov  edx,OFFSET prompt1     ; addr of first prompt  ? EDX
    call WriteString            ; print prompt
    call ReadInt                ; read integer          ? EAX
    mov  num1,eax               ; save into num1

    mov  edx,OFFSET prompt2     ; addr of second prompt ? EDX
    call WriteString            ; print prompt
    call ReadInt                ; read integer          ? EAX
    mov  num2,eax               ; save into num2

showMenu:                                                       ; ?? menu loop
    call Crlf                  ; newline for spacing
    mov  edx,OFFSET menuTitle  ; addr title ? EDX
    call WriteString           ; display title
    mov  edx,OFFSET menuOptions; addr options ? EDX
    call WriteString           ; display options
    mov  edx,OFFSET menuPrompt ; addr prompt ? EDX
    call WriteString           ; display choose prompt
    call ReadInt               ; read choice            ? EAX
    mov  choice,eax            ; store raw choice

    cmp  eax,1                 ; option 1? (add)
    je   doAdd
    cmp  eax,2                 ; option 2? (sub)
    je   doSub
    cmp  eax,3                 ; option 3? (mul)
    je   doMul
    cmp  eax,4                 ; option 4? (div)
    je   doDiv
    cmp  eax,5                 ; option 5? (exit)
    je   exitProgram
    jmp  showMenu              ; any other value ? redisplay

; ----------------------  Addition  -------------------------
doAdd:
    mov  eax,num1              ; load first addend
    add  eax,num2              ; eax = num1 + num2
    mov  result,eax            ; save sum

    call Crlf
    mov  edx,OFFSET resultMsg  ; "Computation Result:"
    call WriteString
    mov  edx,OFFSET sumLabel   ; "The sum of "
    call WriteString
    mov  eax,num1
    call WriteInt              ; print num1
    mov  edx,OFFSET andLabel   ; " and "
    call WriteString
    mov  eax,num2
    call WriteInt              ; print num2
    mov  edx,OFFSET isLabel    ; " is "
    call WriteString
    mov  eax,result
    call WriteInt              ; print sum
    call Crlf
    jmp  start                 ; prompt for new pair

; ----------------------  Subtraction  ----------------------
doSub:
    mov  eax,num1              ; minuend
    sub  eax,num2              ; eax = num1 - num2
    mov  result,eax            ; save difference

    call Crlf
    mov  edx,OFFSET resultMsg
    call WriteString
    mov  edx,OFFSET diffLabel
    call WriteString
    mov  eax,num1
    call WriteInt
    mov  edx,OFFSET andLabel
    call WriteString
    mov  eax,num2
    call WriteInt
    mov  edx,OFFSET isLabel
    call WriteString
    mov  eax,result
    call WriteInt
    call Crlf
    jmp  start

; ----------------------  Multiplication  -------------------
doMul:
    mov  eax,num1              ; load multiplicand
    imul num2                  ; signed multiply by num2
    mov  result,eax            ; save product

    call Crlf
    mov  edx,OFFSET resultMsg
    call WriteString
    mov  edx,OFFSET prodLabel
    call WriteString
    mov  eax,num1
    call WriteInt
    mov  edx,OFFSET andLabel
    call WriteString
    mov  eax,num2
    call WriteInt
    mov  edx,OFFSET isLabel
    call WriteString
    mov  eax,result
    call WriteInt
    call Crlf
    jmp  start

; ----------------------  Division  -------------------------
doDiv:
    mov  eax,num1              ; dividend ? EAX
    cdq                        ; sign-extend into EDX
    idiv num2                  ; EDX:EAX / num2
    mov  result,eax            ; quotient
    mov  remainder,edx         ; remainder

    call Crlf
    mov  edx,OFFSET resultMsg
    call WriteString
    mov  edx,OFFSET divLabel
    call WriteString
    mov  eax,num1
    call WriteInt
    mov  edx,OFFSET andLabel
    call WriteString
    mov  eax,num2
    call WriteInt
    mov  edx,OFFSET isLabel
    call WriteString
    mov  eax,result
    call WriteInt
    mov  edx,OFFSET quotientLabel
    call WriteString
    mov  eax,remainder
    call WriteInt
    call Crlf
    jmp  start

; ----------------------  Exit Path  ------------------------
exitProgram:
    call Crlf                  ; final blank line
    call ExitProcess           ; terminate via Irvine32

main ENDP
END main
