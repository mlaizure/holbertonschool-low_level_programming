section .text
	global	main
	extern	printf
main:
	mov	rdi, fmt
	mov	rsi, msg
	mov	al, 0
	call 	printf

	ret

section .data
fmt db		"%s", 10, 0
msg db		"Hello, Holberton"
