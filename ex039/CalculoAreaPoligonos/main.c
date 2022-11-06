#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "poligonos.h"

int main(int argc, char *argv[]) {
	
	int poligono;
	float area;
	
	puts("-------Calculo da area---------");
	puts("1 - Quadrado\n2 - Retangulo\n3 - Triangulo");
	printf("Informe o poligono que voce deseja calcular a area: ");
	scanf("%d", &poligono);
	fflush(stdin);
	
	system("cls");
	
	if (poligono == 1){
		float ladoQuadrado;
		
		printf("\nInforme o lado do quadrado: ");
		scanf("%f", &ladoQuadrado);
		fflush(stdin);
		
		area = areaQuadrado(ladoQuadrado);
		
		printf("A area do quadrado equivale a: %.2f\n", area);
	} else {
		if (poligono == 2){
			float altura, largura;
			
			printf("\nInforme a altura do retangulo: ");
			scanf("%f", &altura);
			fflush(stdin);
			
			printf("Informe a largura do retangulo: ");
			scanf("%f", &largura);
			fflush(stdin);
			
			area = areaRetangulo(largura, altura);
			
			printf("A area do retangulo equivale a: %.2f\n", area);
		} else {
			if (poligono == 3){
				float base, altura;
				
				printf("\nInforme a base do triangulo: ");
				scanf("%f", &base);
				fflush(stdin);
				
				printf("Informe a altura do triangulo: ");
				scanf("%f", &altura);
				fflush(stdin);
				
				area = areaTriangulo(base, altura);
				
				printf("A area do Triangulo equivale a: %.2f\n", area);
			}
		}
	}
	
	system("pause");
	return 0;
}
