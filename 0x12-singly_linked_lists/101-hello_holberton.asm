extern printf   ; Declare the 'printf' function, which is provided externally

section .data
msg: db 'Hello, Holberton', 10
fmt: db '%s', 0

section .text

global main    ; Declare 'main' as the entry point of the program

main:          ; The start of the 'main' function
    push rbp       ; Save the current value of the base pointer to set up a stack frame
    mov rdi, fmt   ; Move the address of 'fmt' (format string) into the 'rdi' register
    mov rsi, msg   ; Move the address of 'msg' (message string) into the 'rsi' register
    xor rax, rax   ; Clear 'rax' register (used to indicate successful program execution)

    call printf    ; Call the 'printf' function to print the formatted string

    pop rbp        ; Restore the base pointer, cleaning up the stack frame

    mov rax, 60    ; Set 'rax' to 60 (syscall number for 'exit')
    xor edi, edi   ; Clear 'edi' register (used for the exit status, 0 in this case)
    syscall        ; Perform the syscall to terminate the program
