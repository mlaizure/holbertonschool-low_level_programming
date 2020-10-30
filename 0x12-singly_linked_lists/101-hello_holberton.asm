section .text
	global	main
	extern	printf
	extern	exit

main:
	mov	rax, 0
	mov	rdi, fmt
	call 	printf

	mov 	rax, 0
	mov 	rdi, 0
	call	exit

section .data
fmt db		"Hello, Holberton", 10, 0
