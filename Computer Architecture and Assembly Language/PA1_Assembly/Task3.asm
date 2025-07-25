;------------------------------------------------------
; Name: Yaseer Sabir
; Course:  CSC2025 - Computer Architecture and Assembly Language
; Title: Programming HW #2 - Task 3: Gap Sum
; Date: 06/05/2025
;------------------------------------------------------
; Description:
; This program calculates the sum of all the gaps between
; successive elements of a 10-element array of DWORDs in
; nondecreasing order. The result is stored in GapSum.
;
; Inputs: None
; Outputs: Result stored in variable GapSum
; Registers used: EAX, EBX, ECX, ESI
; Memory: array (10 DWORDs), GapSum (DWORD)
;------------------------------------------------------

.386
.model flat,stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
array   dd 0, 2, 5, 9, 10, 15, 17, 23, 25, 25 ; 10 DWORDs
GapSum  dd 0                                 ; Result of all gaps

.code
main proc
    mov esi, offset array        ; ESI points to current element
    mov ecx, 9                   ; Number of gaps is one less than element count
    xor eax, eax                 ; Clear EAX (total sum)
    xor ebx, ebx                 ; Clear EBX (temporary gap)

calc_loop:
    mov ebx, [esi+4]             ; Load next element
    sub ebx, [esi]               ; Calculate gap = next - current
    add eax, ebx                 ; Add gap to total
    add esi, 4                   ; Move to next element
    loop calc_loop               ; Repeat for remaining gaps

    mov GapSum, eax              ; Store result in memory

    invoke ExitProcess, 0        ; Exit program
main endp
end main
