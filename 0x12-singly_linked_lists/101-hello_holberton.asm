section .data
format db "Hello, Holberton",10,0

section .text
global main
extern printf

main:
    mov edi, format
    xor eax, eax
    call printf
    mov eax, 60      ; syscall number for exit
    xor edi, edi     ; Exit status: 0
    syscall

