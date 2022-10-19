#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor, i;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	
	
	if (valor >= 1 && valor <= 10){
		
		printf("\nA tabuada deste valor eh: \n");
		
		for(i = 1; i <= 10; i++){
			printf("%d * %d = %d\n", valor, i, (valor*i));
		}
		
	} else {
		printf("\nValor Invalido\n");
	}
	
	system("pause");
}
