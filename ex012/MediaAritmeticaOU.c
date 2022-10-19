#include <stdio.h>
#include <stdlib.h>

//Programa media aritmetica ou ponderada

int main(){
	
	int i, a, b, c;
	float media;
	
	printf("Digite o valor A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	printf("\nDigita um valor para a decisao (Inteiro Positivo): ");
	scanf("%d", &i);
	
	if (i % 2 == 0 && i <= 10){
		media = (a+b+c)/3;
		printf("\nMedia Aritmetica = %.2f\n", media);
	} else {
		if (i % 2 == 0 && i > 10){
			media = (a*2+b*3+c*4)/9.0;
			printf("Media Ponderada = %.2f\n", media);
		} else {
			printf("\nValor negativo na decisão\n");
		}
	}
	system("pause");
}
