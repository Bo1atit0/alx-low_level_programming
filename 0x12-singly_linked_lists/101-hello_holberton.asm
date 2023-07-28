section .data
msg db "Hello, Holberton", 0
fmt db '%s', 0

section .text
global_main:

extern printf

main:

;push arguments for printf function

push rdi	;Argument for format string (%s)
push msg	;Argument for string

	;call printf function
call printf

;clean up stack
add rsp, 16

;Exit program
mov rax, 60	;Syscall number for exit
xor edi, edi	;exit status 0
syscall
