#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float salarioMinimo, salarioUsuario, qtdSalario;
	
	printf("Digite o Salario minimo atual: ");
	scanf("%f", &salarioMinimo);
	
	printf("\nDigite seu salario: ");
	scanf("%f", &salarioUsuario);
	
	qtdSalario = salarioUsuario / salarioMinimo;
	qtdSalario = floor(qtdSalario);
	
	printf("Voce recebe %.0f salarios minimos\n", qtdSalario);
	system("pause");
}
