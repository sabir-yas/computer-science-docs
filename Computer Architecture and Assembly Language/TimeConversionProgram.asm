;----------------------------------------------------------
; Name: Yaseer Sabir
; Course: CSC2025 - Computer Architecture and Assembly Language
; Program: HW3 Part 1 – Time Conversion Program
; Date: 06/05/2025
;----------------------------------------------------------

INCLUDE Irvine32.inc
INCLUDELIB Irvine32.lib

.data
; Prompt messages
promptHours     BYTE "Enter the number of hours: ", 0
promptMinutes   BYTE "Enter the number of minutes: ", 0
promptSeconds   BYTE "Enter the number of seconds: ", 0
invalidInput    BYTE "Invalid input. Please enter a numeric value.", 0Dh, 0Ah, 0

; Output messages
msgHours        BYTE "The number of hours entered was ", 0
msgMinutes      BYTE "The number of minutes entered was ", 0
msgSeconds      BYTE "The number of seconds entered was ", 0
msgTotalMin     BYTE "The total number of minutes is ", 0
msgTotalSec     BYTE "The total number of seconds is ", 0
msgRetry        BYTE "Try again (y/n)? ", 0
newline         BYTE 0Dh, 0Ah, 0

; Input and calculated values
inputHours      DWORD ?
inputMinutes    DWORD ?
inputSeconds    DWORD ?
totalSeconds    DWORD ?
totalMinutes    DWORD ?
response        BYTE ?

.code
main PROC
;----------------------------------------------------------
; Procedure: main
; Description:
;   Prompts user for hours, minutes, seconds, then calculates
;   total seconds and minutes. Displays results and offers to retry.
; Inputs:
;   User input from console (ReadInt)
; Outputs:
;   Formatted display of inputs and results using WriteString/WriteInt
; Memory Usage:
;   Stores user inputs and calculated results in memory variables
; Registers:
;   EAX, EBX, EDX used for arithmetic and I/O operations
;----------------------------------------------------------
repeatProgram:
    ; Prompt and read hours
    mov edx, OFFSET promptHours
    call WriteString
    call ReadInt
    mov inputHours, eax

    ; Prompt and read minutes
    mov edx, OFFSET promptMinutes
    call WriteString
    call ReadInt
    mov inputMinutes, eax

    ; Prompt and read seconds
    mov edx, OFFSET promptSeconds
    call WriteString
    call ReadInt
    mov inputSeconds, eax

    ; Echo user input
    mov edx, OFFSET newline
    call WriteString

    mov edx, OFFSET msgHours
    call WriteString
    mov eax, inputHours
    call WriteInt
    call Crlf

    mov edx, OFFSET msgMinutes
    call WriteString
    mov eax, inputMinutes
    call WriteInt
    call Crlf

    mov edx, OFFSET msgSeconds
    call WriteString
    mov eax, inputSeconds
    call WriteInt
    call Crlf

    ; Calculate total seconds and minutes
    mov eax, inputHours
    imul eax, 3600
    mov ebx, inputMinutes
    imul ebx, 60
    add eax, ebx
    add eax, inputSeconds
    mov totalSeconds, eax

    mov eax, totalSeconds
    cdq
    mov ebx, 60
    div ebx
    mov totalMinutes, eax

    ; Output total minutes
    mov edx, OFFSET msgTotalMin
    call WriteString
    mov eax, totalMinutes
    call WriteInt
    call Crlf

    ; Output total seconds
    mov edx, OFFSET msgTotalSec
    call WriteString
    mov eax, totalSeconds
    call WriteInt
    call Crlf

    ; Prompt for repeat
    call Crlf
    mov edx, OFFSET msgRetry
    call WriteString
    call ReadChar
    mov response, al
    call Crlf

    ; Convert to lowercase and check
    movzx eax, response
    or al, 32
    cmp al, 'y'
    je repeatProgram

    exit
main ENDP
END main
