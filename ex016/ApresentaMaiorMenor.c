#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int v1, v2, v3, maior, menor;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &v1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &v2);
	
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &v3);
	
	if (v1 > v2){
		
		if(v2 == v3){
			maior =  v1;
			printf("\nos valores do segundo valor: %d e do terceiro valor: %d sao iguais e menores que o primeiro: %d\n", v2, v3, maior);
		} else {
			if (v1 == v3){
				menor =  v2;
				printf("\nos valores de primeiro: %d e do terceiro: %d sao iguais e maiores que %d\n", v1, v3, menor);
			}
		}
		
		if (v2 > v3){
				menor = v3;
				maior = v1;
			} else {
				if (v1 > v3){
					maior = v1;
					menor = v2;
				} else {
					maior = v3;
					menor = v2;
				}
			}
		
		printf("\nO numero %d eh o maior valor\n", maior);
		printf("O numero %d eh o menor valor\n", menor);
		
	} else {
		
		if (v1 == v2){
			
			if (v1 == v3){
				printf("\nOs valores sao iguais\n");
			} else {
				if (v1 > v3){
					menor = v3;
					printf("\no primeiro: %d , e o segundo: %d valor, sao iguais e maiores que o terceiro: %d valor.\n", v1, v2, menor);
				} else {
					maior = v3;
					printf("\no primeiro: %d , e o segundo: %d valor, sao iguais e menores que o terceiro: %d valor.\n", v1, v2, maior);
				}
			}
			//Falta o primeiro e o terceiro e o segundo e o terceiro
		} else {
			
			if (v1 == v3){
				maior = v2;
				printf("\n os valores do primeiro: %d e do terceiro: %d sao iguais e menores que o segundo valor: %d\n", v1, v3, maior);
				
			} else {
				
				if (v1 > v3){
					menor =  v3;
				} else {
					menor =  v1;
				}
			
				if (v2 > v3){
					maior = v2;
				} else {
					maior =  v3;
				}
				
				printf("\nO numero %d eh o maior valor\n", maior);
				printf("O numero %d eh o menor valor\n", menor);
				
			}
		}
	
	system("pause");
	
	}
}
