#include <stdio.h>
#include <stdlib.h>

//	Faça um programa que receba quatro
//	valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos.
//	Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado
//	para I seja sempre um valor válido, ou seja, 1, 2 ou 3.

//	Valor de I 		Forma de escrever
//	1 				A, B e C em ordem crescente
//	2 				A, B e C em ordem decrescente
//	3 				O maior fica entre os outros dois números

int main(){
	
	int i;
	float A, B, C;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	
	printf("\nValor de I correspondente a forma como serao escritos os numeros.\nVALOR 1: Ordem Crescente.\nVALOR 2: Ordem Decrescente\nVALOR 3: O maior fica entre os outros dois numeros");
	
	printf("\n\nDigite o Valor de I: ");
	scanf("%d", &i);
	
	if (i == 1){ //ORDEM CRESCENTE
		if (A > B){
			if (B > C){
				printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", C, B, A);
			} else {
				if (C > A){
					printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", B, A, C);
				} else {
					printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", B, C, A);
				}
			}
		} else{
			if (C > B){
				printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", A, B, C);
			} else {
				if (C > A){
					printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", A, C, B);
				} else {
					printf("\n\nOrdem Crescente: %.1f - %.1f - %.1f\n\n", C, A, B);
				}
			}
		}
	} else{
		if (i == 2){ //ORDEM DECRESCENTE
			if (A > B){
				if (B > C){
					printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", A, B, C);
				} else {
					if (C > A){
						printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", C, A, B);
					} else {
						printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", A, C, B);
					}
				}
			} else{
				if(C > B){
					printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", C, B, A);
				} else {
					if (C > A){
						printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", B, C, A);
					}else {
						printf("\n\nOrdem Decrescente: %.1f - %.1f - %.1f\n\n", B, A, C);
					}
				}
			}	
		} else{
			if (i == 3){ //MAIOR NUMERO NO MEIO
				if (A>B){
					if (A>C){
						printf("\n\nO maior numero no meio: %.1f - %.1f - %.1f\n\n", B, A, C);
					}else{
						printf("\n\nO maior numero no meio: %.1f - %.1f - %.1f\n\n", B, C, A);
					}
				} else {
					if (B>C){
						printf("\n\nO maior numero no meio: %.1f - %.1f - %.1f\n\n", A, B, C);
					} else{
						printf("\n\nO maior numero no meio: %.1f - %.1f - %.1f\n\n", A, C, B);
					}
				}
				
			} else{
				printf("\nValor de I Invalido\n");
			}
		}
	}
	
	system("pause");
}
