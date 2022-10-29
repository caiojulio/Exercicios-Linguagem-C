#include <stdio.h>
#include <stdlib.h>

//	Faça um programa que leia dez conjuntos de
//	dois valores, o primeiro representando o número do aluno e o segundo representando
//	sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número
//	do aluno mais alto e o número do mais baixo, junto com suas alturas.
//	do aluno mais alto e o número do mais baixo, junto com suas alturas.

int main(){
	
	int numAluno, numeroAlturaMaior, numeroAlturaMenor, i = 1;
	float altura, maiorAltura, menorAltura;
	
	for (i; i <= 10; i++){
		
		printf("informe o numero do Aluno: ");
		scanf("%d", &numAluno);
		
		printf("Informe a altura do aluno: ");
		scanf("%f", &altura);
		
		if (i == 1){
			numeroAlturaMaior = numAluno;
			maiorAltura = altura;
			
			numeroAlturaMenor = numAluno;
			menorAltura = altura;
		}
		
		
		
		if (altura > maiorAltura){
			numeroAlturaMaior = numAluno;
			maiorAltura = altura;
			
		} else {
			if (altura < menorAltura){
		
				numeroAlturaMenor = numAluno;
				menorAltura = altura;
			} 
		}
		
	}
	
	printf("Numero do Maior Aluno: %d\n", numeroAlturaMaior);
	printf("Maior altura: %.2f\n\n", maiorAltura);
	printf("Numero do menor aluno: %d\n", numeroAlturaMenor);
	printf("Menor altura: %.2f\n", menorAltura);
	
	system("pause");
}
