; Author: Yaseer Sabir
; Course:  CSC2025 - Computer Architecture and Assembly Language
; Program: Task 2 – Fibonacci Sequence (first 26 numbers)
; Date: 06/05/2025

; Description:
; Generates the first 26 Fibonacci numbers and stores them in an array.
; This program uses 32-bit MASM syntax (Visual Studio, no Irvine).

.386
.MODEL flat, stdcall
.STACK 100h

.DATA
fibList DWORD 26 DUP(0)     ; Array to hold the first 26 Fibonacci numbers
count   DWORD 26            ; Number of elements

.CODE
main PROC
    ; First 2 values
    MOV DWORD PTR [fibList], 0          ; Fib(0)
    MOV DWORD PTR [fibList + 4], 1      ; Fib(1)

    MOV ECX, 2                          ; Start index at 2
generate:
    CMP ECX, count
    JGE done                            ; If ECX >= 26, end loop

    ; Calculate Fib(n) = Fib(n-1) + Fib(n-2)
    MOV EAX, [fibList + ECX*4 - 4]      ; Fib(n-1)
    MOV EBX, [fibList + ECX*4 - 8]      ; Fib(n-2)
    ADD EAX, EBX
    MOV [fibList + ECX*4], EAX          ; Store Fib(n)

    INC ECX
    JMP generate

done:
    ; Exit
    MOV EAX, 0
    RET
main ENDP

END main
