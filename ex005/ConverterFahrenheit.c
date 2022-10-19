#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor, formulaInteiro;
	double formula_conversao;
	
	printf("Digite o valor em Fahrenheit: ");
	scanf("%d", &valor);
	
	formula_conversao = (valor - 32.0)*(5.0/9.0);
	formulaInteiro = formula_conversao;
	
	printf("O valor %d convertido de Fahrenheit para Celsius eh igual a: %.2f\n", valor, formula_conversao);
	printf("O valor %d convertido de Fahrenheit para Celsius: %d \n", valor, formulaInteiro);
	system("pause");
}
