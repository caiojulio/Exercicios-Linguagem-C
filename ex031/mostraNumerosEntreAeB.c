#include <stdio.h>
#include <stdlib.h>

//	 Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela
//	todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B.
//	Suponha que o usuário respeite o enunciado e insira valores válidos para A e B.

int main (){
	
	int A, B, i;
	
	printf("Insira o valor de A: ");
	scanf("%d", &A);
	
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	
	if (A > B){
		printf("\nO Valor de A: %d e maior que o Valor de B: %d, logo os valores inteiros compreendidos estarao entre %d ate %d\n\n", A, B, B, A);
		printf("\nValores inteiros entre %d e %d: ", B, A);
		
		for(i = B; i<A; i++){
			
			if(i > B && i < A){
			
				if (i == (A-1)){
					printf("%d\n", i);
				} else {
					printf("%d - ", i);
				}
				
			} else {
				if (i+1 == A){
					printf("Valores compreendidos entre %d e %d sao reais\n", B, A);
				}
			}
		}
	} else {
		if (A == B){
			printf("\nOs valores de A e B sao iguais.\n");
		} else {
			printf("\nO Valor de B: %d e maior que o Valor de A: %d, logo os valores inteiros compreendidos estarao entre %d ate %d\n\n", B, A, A, B);
			printf("\nOs valores inteiros entre %d e %d: ", A, B);
			
			for (i=A; i<B; i++){
				
				if (i > A && i < B){
					if (i == (B-1)){
						printf("%d\n", i);
					}else{
						printf("%d - ", i);
					}
				} else {
					if (i+1 == B){
						printf("Valores compreendidos entre %d e %d sao reais\n", A, B);
					}
				}
				
			}
		}
	}

	system("pause");
}
