.data

.text
.global suma
suma:
	addq %rdi,%rsi
	movq %rsi,%rax
	jmp *%r8 #equivaldria a hacer movq %r8,%rip
	

.global main
main:
	movq $8,%rdi
	movq $2,%rsi
	movq $sigue,%r8
	jmp suma  #llamada
sigue:
	movq $1,%rdi
	movq $3,%rsi
	movq $sigue2,%r8
	jmp suma  #llamada
sigue2:
	ret
