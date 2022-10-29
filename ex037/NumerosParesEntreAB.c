#include <stdio.h>
#include <stdlib.h>

//	Desenvolva um algoritmo que peça ao
//	usuário que insira cinco conjuntos de dois números inteiros positivos (A, B), no qual A
//	deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). Para cada
//	dupla (A, B), informada pelo usuário, o algoritmo deve mostrar, na tela, todos os
//	números pares compreendidos entre A e B (inclusive).

int main(){
	
	int i, A, B;
	
	for (i=1; i<6; i++){
		
		printf("Informe o valor A: ");
		scanf("%d", &A);
		
		printf("Informe o valor B: ");
		scanf("%d", &B);
		
		if (A < B){
			
			for(A; A<=B; A++){
				if (A%2==0){
					printf("Valor par: %d\n", A);
				}
			}
			
		} else {
			printf("O valor de A deve ser menor que o valor de B, Insira os valores novamente\n\n");
			i -= 1;
		}
		
	}
	
	system("pause");
	
}
