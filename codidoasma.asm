



.main:
	la $a0, $Titulo
	li $v0, 4
	la $a0, $Devs
	li $v0, 4
	SYSCALL
	
	# dentro do loop
	la $a0, $Enunciado
	li $v0, 4
	la $a0, $Resultado
	li $v0, 4
	SYSCALL

.data
$Titulo:
	.ascii "Programa de Raiz Quadrada - Newton-Rapson"
$Devs:
	.ascii "Desenvolvedores: < Sophia, Bruna, Luiza, Gabrielle >"

$Enunciado:
	.ascii "Digite os parâmetros de x e i para calcular sqrt_nr (x,i) ou -1 para abortar a execução"
	
$Resultado:
	.ascii
	