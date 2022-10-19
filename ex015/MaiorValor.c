#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int v1, v2, v3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &v1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &v2);
	
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &v3);
	
	if (v1 > v2){
		if (v1 > v3){
			printf("\nO numero %d eh o maior valor\n", v1);
		} else {
			printf("\nO numero %d eh o maior valor\n", v3);
		}
	} else {
		if (v2 > v3){
			printf("\nO numero %d eh o maior valor\n", v2);
		} else {
			printf("\nO numero %d eh o maior valor\n", v3);
		}
	}
	
	
	system("pause");
}
