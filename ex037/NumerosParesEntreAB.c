#include <stdio.h>
#include <stdlib.h>

//	Desenvolva um algoritmo que pe�a ao
//	usu�rio que insira cinco conjuntos de dois n�meros inteiros positivos (A, B), no qual A
//	deve ser menor que B (sup�e-se que o usu�rio ir� respeitar esse enunciado). Para cada
//	dupla (A, B), informada pelo usu�rio, o algoritmo deve mostrar, na tela, todos os
//	n�meros pares compreendidos entre A e B (inclusive).

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
