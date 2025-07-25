;----------------------------------------------------------
; Name: Yaseer Sabir
; Course:  CSC2025 - Computer Architecture and Assembly Language
; Program: Task 4 – Reverse Array In Place
; Date: 06/05/2025
;----------------------------------------------------------

.model flat, stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
; Define an integer array with at least 10 elements
myArray  DWORD  1, 2, 3, 4, 5, 6, 7, 8, 9, 10

; Get metadata
arrSize  = LENGTHOF myArray              ; Number of elements
arrType  = TYPE myArray                  ; Size of each element (4 bytes)
arrBytes = SIZEOF myArray                ; Total size in bytes

.code
;----------------------------------------------------------
; Procedure: main
; Inputs: None (array is statically defined)
; Outputs: myArray reversed in place
; Memory Usage: Uses `myArray` (DWORD[10])
; Register Usage:
;   - ESI: start index
;   - EDI: end index
;   - EAX/EBX: temp registers for swapping
; Description:
;   Reverses the array `myArray` in place using indirect/indexed
;   addressing with a loop. Does not use extra memory.
;----------------------------------------------------------
main proc
    ; Set up index registers
    mov esi, 0                           ; esi = start index (0)
    mov edi, arrSize - 1                 ; edi = end index (9)

reverse_loop:
    cmp esi, edi                         ; If start >= end, we're done
    jge done

    ; Calculate addresses of elements to swap
    mov eax, myArray[esi * arrType]      ; eax = myArray[esi]
    mov ebx, myArray[edi * arrType]      ; ebx = myArray[edi]

    ; Swap elements
    mov myArray[esi * arrType], ebx
    mov myArray[edi * arrType], eax

    ; Move indices
    inc esi
    dec edi
    jmp reverse_loop

done:
    invoke ExitProcess, 0
main endp
end main
