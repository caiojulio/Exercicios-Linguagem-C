#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float distanciaNumeros(float n1, float n2);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float v1,v2, distance;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &v1);
	fflush(stdin);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &v2);
	fflush(stdin);
	
	distance = distanciaNumeros(v1,v2);
	
	printf("A distância entre os numeros equivale à: %.2f\n", distance);
	
	system("pause");
}

float distanciaNumeros(float n1, float n2){
	
	float distancia;
	
	if (n1 >= n2){
		distancia =  n1 - n2;
		return distancia;
	} else{
		distancia = n2 - n1;
		return distancia;
	}
	
}
