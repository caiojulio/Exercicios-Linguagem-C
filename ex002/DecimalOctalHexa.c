#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor;
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	printf("\nVALOR FORMATADO\n");
	printf("Valor em base decimal: %d\n", valor);
	printf("Valor em base hexadecimal: %x\n", valor);
	printf("Valor em base octal: %o\n", valor);

	system("pause");
}
