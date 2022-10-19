#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float somaElementos, listaNotas[5], notaAluno, media;
	int i;
	
	for (i = 0; i < 5; i++){
		printf("\nDigite a nota do %d aluno: ", i+1);
		scanf("%f", &notaAluno);
		
		listaNotas[i] = notaAluno;
	}
	
	for ( i = 0; i < 5; i++){
		somaElementos += listaNotas[i];
	}
	
	media = somaElementos/5;
	
	printf("A media da turma é igual a: %.1f\n", media);	
	
	
	
	system("pause");
}
