#include <stdio.h>
#include <stdlib.h>

//	Faça um programa que leia um valor N inteiro
//	e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir:
//	E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!



int main(){
	
	int n, i = 1, x;
	float e = 1, fat_x;
	
	
	if(n%2==0){
		
		printf("Informe o valor de N: ");
		scanf("%d", &n);
		
		for(i ; i<=n; i++){	
			
			fat_x=1;
			
			for (x = i; x>0; x--){
				fat_x *= x;
			}
				
			e += 1/fat_x; 
		}
		
		printf("Resultado: %f\n", e);
		
	} else {
		printf("\nValor Invalido\n");
	}
	
	system("pause");
}
