formato: .string "Esto es una prueba %s\n"
#printf("Esto es una prueba %s\n","jejeje");
jejeje: .string "jejeje"

.global main
main:
	movq $formato, %rdi #Otra opcion?
	movq $jejeje, %rsi 
	
	xorq %rax,%rax 
	call printf
	ret
