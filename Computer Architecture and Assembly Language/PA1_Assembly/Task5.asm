;----------------------------------------------------------
; Name: Yaseer Sabir
; Course:  CSC2025 - Computer Architecture and Assembly Language
; Program: Task 5 – Reverse a String Using Indirect Addressing
; Date: 06/05/2025
;----------------------------------------------------------

.model flat, stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
; Source string with null terminator
source BYTE "This is the source string", 0

; Allocate target buffer with same size as source
target BYTE SIZEOF source DUP('#')

.code
;----------------------------------------------------------
; Procedure: main
; Inputs: None (source string is defined in .data section)
; Outputs: Reversed string stored in `target`, null-terminated
; Memory Usage: `source` and `target` byte arrays
; Register Usage:
;   - ESI: pointer to source (reads backward)
;   - EDI: pointer to target (writes forward)
;   - ECX: loop counter for characters (excluding null)
;   - AL: temporary storage for character copying
; Description:
;   Reverses the string in `source` and stores it in `target`
;   using indirect addressing. Handles null-terminator correctly.
;----------------------------------------------------------
main proc
    ; esi = pointer to source string
    ; edi = pointer to target string (from the end, not including null terminator)
    ; ecx = loop counter

    lea esi, source                    ; Load address of source into ESI
    lea edi, target                    ; Load address of target into EDI

    mov ecx, SIZEOF source            ; Total number of bytes including null
    dec ecx                           ; Adjust for null terminator (we copy it last)

    add esi, ecx                      ; Move ESI to end of source - 1
    xor eax, eax                      ; Clear EAX (used to read byte)

reverse_loop:
    mov al, [esi]                     ; Load byte from end of source
    mov [edi], al                     ; Store byte to start of target

    dec esi                           ; Move source pointer backward
    inc edi                           ; Move target pointer forward
    loop reverse_loop                 ; Loop until ECX = 0

    ; Add null terminator to target
    mov byte ptr [edi], 0

    invoke ExitProcess, 0
main endp
end main
