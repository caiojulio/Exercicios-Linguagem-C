#include <stdio.h>
#include <stdlib.h>

//  Fa�a um programa que receba tr�s n�meros
//  obrigatoriamente em ordem crescente e um quarto n�mero que n�o siga esta regra.
//  Mostre, em seguida, os quatro n�meros em ordem n�o-crescente.

int main (){
	
	int i, n[4];
	
	for (i=0; i<4; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<4; i++){
		printf("\n%d Numero: %d", i+1, n[i]);
	}
	
	printf("\n");
	
	if (n[0]<n[1] && n[1]<n[2]){
		if (n[3]>n[2]){
			printf("\nvalores formatados em ordem decrescente: %d - %d - %d - %d", n[3], n[2], n[1], n[0]);
		} else {
			if (n[3]>n[1]){
				printf("\nvalores formatados em ordem decrescente: %d - %d - %d - %d", n[2], n[3], n[1], n[0]);
			} else {
				if (n[3]>n[0]){
					printf("\nvalores formatados em ordem decrescente: %d - %d - %d - %d", n[2], n[1], n[3], n[0]);
				} else {
					printf("\nvalores formatados em ordem decrescente: %d - %d - %d - %d", n[2], n[1], n[0], n[3]);
				}
			}
		}
	} else{
		printf("\nOs tres primeiros numeros nao estao em ordem crescente\n");
	}
	
	printf("\n");
	system("pause");
}
