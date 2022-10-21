#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Desenvolva um algoritmo que pe�a ao usu�rio que informe os coeficientes a, b e c de
//   uma equa��o de segundo grau: ax� + bx + c. Com base na F�rmula de Bhaskara, calcule
//   e mostre as ra�zes da respectiva equa��o de segundo grau.

int main(){
	
	int a, b, c, delta;
	float raiz1, raiz2;
	
	printf("Insira o coeficiente de x^2: ");
	scanf("%d", &a);
	
	printf("Insira o coeficiente de x: ");
	scanf("%d", &b);
	
	printf("Insira o termo independente: ");
	scanf("%d", &c);
	
	delta = (b*b) - 4 * a * c;
	
	if (delta >= 0){
		raiz1 = (- b + sqrt(delta))/2*a;
		raiz2 = (- b - sqrt(delta))/2*a;
		printf("Raiz x' = %.1f\nRaiz x'' = %.1f\n", raiz1, raiz2);
	} else {
		printf("Sem solucao para delta negativo");
	}
	
	
	system("pause");
}
