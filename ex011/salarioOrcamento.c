#include <stdio.h>
#include <stdlib.h>

//Programa salario recebido e total gasto

int main(){
	
	float salarioUsuario, totalGasto;
	
	printf("Informe o salario recebido: ");
	scanf("%f", &salarioUsuario);
	
	printf("Informe o total de gastos: ");
	scanf("%f", &totalGasto);
	
	if (totalGasto > salarioUsuario){
		printf("\nOr�amento Estourado\n");
	} else {
		printf("\nGastos dentro do orcamento\n");
	}
	
	system("pause");
}
