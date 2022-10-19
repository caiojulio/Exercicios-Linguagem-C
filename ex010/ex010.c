#include <stdio.h>
#include <stdlib.h>

//Programa lê dois numeros e informa se estes são iguais ou diferentes

int main(){
	
	int valor1, valor2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &valor2);
	
	if (valor1 == valor2){
		printf("\n%d e %d sao valores iguais\n", valor1, valor2);
	}else {
		printf("\n%d e %d sao valores diferentes\n", valor1, valor2);
	}
	
	system("pause");
}
