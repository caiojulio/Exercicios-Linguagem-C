#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valorCliente, somaPrecoProdutos, precoProdutos;
	int  continua = 1 , controladorSomaProdutos = 0; 
	
	printf("---------------------------------------SEJA BEM VINDO---------------------------------- \n");
	
	while (continua == 1){

		while (controladorSomaProdutos == 0){

			printf("Digite o preco do Produto: ");
			scanf("%f", &somaPrecoProdutos);
			 
			 if (somaPrecoProdutos == -1){
			 	controladorSomaProdutos = -1;
			 } else {
			 	precoProdutos += somaPrecoProdutos;
			 }
			 
		}
		
		printf("\nDigite o seu saldo disponivel: ");
		scanf("%f", &valorCliente);
		
		if (valorCliente >= precoProdutos){
			printf("\nValor do troco do cliente é: R$ %.2f\n", valorCliente - precoProdutos);
		} else {
			printf("\nFalta R$ %.2f para efetuar a compra\n", precoProdutos - valorCliente);
		}
		
		printf("\nDeseja efetuar outro calculo de troco?(1 - sim / 0 - Nao): ");
		scanf("%d", &continua);
		
		if (continua == 1){
			controladorSomaProdutos = 0;
			somaPrecoProdutos = 0;
			precoProdutos = 0;
		}
		
	}
	
	printf("\n-------------------------Obrigado Por Utilizar o Software-------------------------------------------------\n");
	
	system("pause");
}
