#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programa apresenta operações com dois valores

int main(){
	
	int valor1, valor2, soma, produtoQuadradoSegundoValor, QuadradoPrimeiro, ModuloValor1;
	float RaizSoma, SenoDiferenca;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &valor2);
	
	soma =  valor1 + valor2;
	produtoQuadradoSegundoValor = valor1 * (pow(valor2, 2));
	QuadradoPrimeiro = pow(valor1, 2);
	RaizSoma = sqrt(valor1 + valor2);
	SenoDiferenca = sin(valor1 - valor2);
	ModuloValor1 = abs(valor1);
	
	printf("\n-----Valores Formatados------\n");
	printf("Soma: %d + %d = %d\n", valor1, valor2, soma);
	printf("Produto de %d pelo quadrado de %d = %d\n", valor1, valor2, produtoQuadradoSegundoValor);
	printf("Quadrado do Primeiro valor = %d\n", QuadradoPrimeiro);
	printf("Raiz da soma de %d + %d = %f\n", valor1, valor2, RaizSoma);
	printf("Seno da diferenca: %d - %d = %f\n", valor1, valor2, SenoDiferenca);
	printf("Modulo do primeiro valor = %d\n", ModuloValor1);
	
	printf("---------------------------\n");
	
	
	system("pause");
}
