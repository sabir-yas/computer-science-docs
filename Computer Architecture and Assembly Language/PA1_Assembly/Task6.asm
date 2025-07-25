;----------------------------------------------------------
; Name: Yaseer Sabir
; Course:  CSC2025 - Computer Architecture and Assembly Language
; Program: Task 6 – Swap Every Pair in an Array
; Date: 06/05/2025
;----------------------------------------------------------

.model flat, stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
array DWORD 10, 20, 30, 40, 50, 60, 70, 80, 90, 100    ; Even number of elements (10)
arraySize = LENGTHOF array                            ; 10 elements
elemSize = TYPE array                                 ; DWORD = 4 bytes

.code
;----------------------------------------------------------
; Procedure: main
; Inputs: None (array is predefined in .data section)
; Outputs: The array is modified in-place so that every pair is swapped
; Memory Usage: `array` (DWORDs)
; Register Usage:
;   - ECX: loop counter (number of pairs to swap)
;   - ESI: byte offset/index into the array
;   - EAX, EBX: temporary storage for elements being swapped
; Description:
;   Swaps every adjacent pair of elements in an array with even length.
;   For example: [10, 20, 30, 40] becomes [20, 10, 40, 30]
;----------------------------------------------------------
main proc
    ; ECX = loop counter (arraySize / 2)
    ; ESI = index (byte offset)

    mov ecx, arraySize / 2                ; Number of swaps = half the array size
    xor esi, esi                          ; Start at byte offset 0

swap_loop:
    ; Load first item into eax
    mov eax, array[esi]                   ; Load item i

    ; Load second item into ebx
    mov ebx, array[esi + elemSize]        ; Load item i+1

    ; Swap the two
    mov array[esi], ebx                   ; Store i+1 into i
    mov array[esi + elemSize], eax        ; Store i into i+1

    add esi, elemSize * 2                 ; Move to next pair
    loop swap_loop                        ; Repeat until all pairs are swapped

    invoke ExitProcess, 0
main endp
end main
