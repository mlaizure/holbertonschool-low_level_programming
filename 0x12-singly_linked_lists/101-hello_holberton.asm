section .text
	extern printf
	global main

main:
	mov	esi, msg
	mov	edi, fmt
	mov	eax, 0
	call 	printf

	mov 	ebx, 0
	mov	eax, 1
	int	0x80

section .data
fmt db		"%s", 10
msg db		"Hello, Holberton", 0
