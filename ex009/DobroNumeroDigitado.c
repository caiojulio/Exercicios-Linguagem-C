#include <stdio.h>
#include <stdlib.h>

//Programa exibe dobro do numero digitado

int main(){
	
	float numero;
	
	printf("Digite um numero qualquer: ");
	scanf("%f", &numero);
	
	printf("\nO dobro do numero %.2f eh igual a: %.2f\n", numero, numero*2);
	
	
	system("pause");
}
