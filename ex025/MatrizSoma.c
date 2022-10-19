#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int Xa, Ya, Xb, Yb, i, s, p, g; //Ya corresponde as linhas da Matriz A, e Xa Corresponde as colunas, Mesma logica para
	// Yb, Xb. i, s, p, g são variaveis para controlar os laços de construção e print da Matriz Soma
	
	float Valor, MatrizA[3][5], MatrizB[3][5], MatrizSoma[3][5];
	
	
	for (Ya = 0; Ya < 3; Ya++){
		for (Xa = 0; Xa < 5; Xa++){
			printf("\nDigite o valor da %d linha %d coluna da Matriz A: ", Ya+1, Xa+1);
			scanf("%f", &MatrizA[Ya][Xa]);
		}
	}
	
	for (Yb = 0; Yb < 3; Yb++){
		for (Xb = 0; Xb < 5; Xb++){
			printf("\nDigite o valor da %d linha %d coluna da Matriz B: ", Yb+1, Xb+1);
			scanf("%f", &MatrizB[Yb][Xb]);
		}
	}
	
	printf("\nMatriz A corresponde a: \n\n");
	//Printar Matriz A
	for (Ya = 0; Ya < 3; Ya++){
		for (Xa = 0; Xa < 5; Xa++){
			printf("[%.1f]", MatrizA[Ya][Xa]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B corresponde a: \n\n");
	
	//Printar a Matriz B
	for (Yb = 0; Yb < 3; Yb++){
		for (Xb = 0; Xb< 5; Xb++){
			printf("[%.1f]", MatrizB[Xb][Yb]);
		}
		printf("\n");
	}
	
	printf("Soma da Matriz A com a Matriz B corresponde a: \n\n");
	//Construir a Matriz da soma de A e B
	for (i = 0; i < 3; i++){
		for (s = 0; s < 5; s++){
			MatrizSoma[i][s] = MatrizA[i][s] + MatrizB[i][s];
		}
	}
	//Printar soma Matriz A e Matriz B
	for (g = 0; g < 3 ; g++){
		for (p = 0; p < 5; p++){
			printf("[%.1f]", MatrizSoma[g][p]);
		}
		printf("\n");
	}
	
	
	
	system("pause");
}
