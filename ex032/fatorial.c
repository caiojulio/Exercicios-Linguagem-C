#include <stdio.h>
#include <stdlib.h>

//	Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
//	que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.

int main(){
	
	int n, fat = 1, i;
	
	printf("Informe o Numero que deseja calcular o fatorial: ");
	scanf("%d", &n);
	
	for (i=n;i>0;i--){
		fat *= i;
	}

	printf("O fatorial de %d equivale a: %d\n", n, fat);
	
	system("pause");
}
