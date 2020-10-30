section .text
	global	main
	extern	printf
	extern	exit

main:
	mov	rdi, fmt
	mov	rsi, msg
	mov	al, 0
	call 	printf

	call	exit

section .data
fmt db		"%s", 10, 0
msg db		"Hello, Holberton"
