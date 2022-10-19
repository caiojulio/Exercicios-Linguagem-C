#include <stdio.h>
#include <stdlib.h>

//Programa apresenta um valor dado em metros, decimetros, centimetros e milimetros

int main(){
	int valor_inicial;
	
	printf("Digite um valor: ");
	scanf("%d", &valor_inicial);
	
	printf("\nValor dado formatado:\n");
	printf("Valor em Metros: %d metros\n", valor_inicial);
	printf("Valor em decimetros: %d decimetros\n", (valor_inicial * 10));
	printf("Valor em centimetros: %d centimetros\n", (valor_inicial * 100));
	printf("Valor em milimetros: %d milimetros\n", (valor_inicial * 1000));
	
	system("pause");
}
