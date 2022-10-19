#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	float somaPrecos, precoMercadorias, preco_A_Vista, precoCartao;
	int i;
	
	for( i = 0 ; i < 10 ; i++){
		printf("Digite o preco da %dº mercadoria: ", i+1);
		scanf("%f", &somaPrecos);
		
		precoMercadorias += somaPrecos;
	}
	
	preco_A_Vista = precoMercadorias - (precoMercadorias*5/100);
	precoCartao = precoMercadorias + (precoMercadorias*30/100);
	
	printf("\nO preco do pagamento a vista: R$ %.2f\n", preco_A_Vista);
	printf("\nO preco do pagamento no cartao: R$ %.2f\n", precoCartao);
	
	system("pause");
}
