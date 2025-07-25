; -------------------------------------------------------------
; Name:        Yaseer Sabir
; Course:      CSC2025 - Computer Architecture and Assembly Language
; Title:       Task 1 - Arithmetic Expression
; Date:        June 4, 2025
; -------------------------------------------------------------
; Description:
;   This program computes:
;   Result = (varA + varB) - (varC + varD)
; -------------------------------------------------------------

.386
.model flat, stdcall
.stack 4096

ExitProcess PROTO, dwExitCode:DWORD

.data
    varA    DWORD   10
    varB    DWORD   5
    varC    DWORD   4
    varD    DWORD   2
    Result  DWORD   ?

.code
main PROC
    ; Load varA into EAX
    mov     eax, varA            ; EAX = varA
    add     eax, varB            ; EAX = varA + varB

    ; Store (varA + varB) in EBX
    mov     ebx, eax             ; EBX = varA + varB

    ; Load varC into EAX
    mov     eax, varC            ; EAX = varC
    add     eax, varD            ; EAX = varC + varD

    ; Subtract (varC + varD)
    sub     ebx, eax             ; EBX = (varA + varB) - (varC + varD)

    ; Store the result
    mov     Result, ebx

    ; Exit program
    invoke  ExitProcess, 0
main ENDP
END main
