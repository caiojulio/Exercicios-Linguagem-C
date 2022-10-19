#include <stdio.h>
#include <stdlib.h>

//Programa calcula media entre três notas

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	printf("\nA media das notas eh igual a: %.1f\n", media);
	
	system("pause");
}
