extern printf

section .text
	global main

main:
	push rbp
	mov rdi,fromat
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret

section .data
	msg: db "Hello, Holberton", 0
	fromat: db "%s", 10, 0

