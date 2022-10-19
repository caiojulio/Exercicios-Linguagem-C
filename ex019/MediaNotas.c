#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, media;
	char conceito;
	
	printf("Digite a nota correspondente a Primeira Avaliacao: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota correspondente a Segunda Avaliacao: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota correspondetne a Terceira Avaliacao: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if (media <= 4.0){
		conceito = 'E';
	} else {
		if (media <= 6.0){
			conceito = 'D';
		} else {
			if (media <= 7.5){
				conceito = 'C';
			} else {
				if (media <= 9.0){
					conceito = 'B';
				} else {
					conceito = 'A';
				}
			}
		}
	}
	
	if (conceito == 'D' || conceito == 'E'){
		printf("\nSeu conceito foi: %c, REPROVADO\n", conceito);
	} else {
		printf("\nSeu conceito foi: %c, APROVADO\n", conceito);
	}
	system("pause");
}
