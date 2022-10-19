#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int qtdIdades, idade, i, somaIdades = 0;
	float media;
	
	printf("Quantas idades serao utilizadas: ");
	scanf("%d", &qtdIdades);
	
	for(i = 1; i <= qtdIdades; i++){
		printf("\nDigite a %dº idade: ", i);
		scanf("%d", &idade);
		somaIdades += idade;
	}
	
	media = (somaIdades/qtdIdades);
	
	printf("\nA media das idades equivale a: %.1f\n", media);
	
	system("pause");
}
