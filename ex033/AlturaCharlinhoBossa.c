#include <stdio.h>
#include <stdlib.h>


//	Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em m�dia 2,1 cent�metros
//	ao ano. Seu irm�o, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em m�dia 1,1
//	cent�metro por ano. Elabore um programa que conte quantos anos ser�o necess�rios
//	para que a altura de Charlinho ultrapasse a de Bossa.

int main(){
	
	int ano = 1, idade_Charlinho = 11, idade_Bossa = 14;
	float Altura_Charlinho = 1.40 , Altura_Bossa = 1.45;
	
	for (Altura_Charlinho; Altura_Charlinho <= Altura_Bossa; ano++){
		
		Altura_Charlinho += 0.021;
		Altura_Bossa += 0.011; //Conves�o dos centimetros em metros para fazer a soma com a altura em metros diretamente
		
//		Linha de Codigo para ver o que acontece em cada repeti��o do for:

//		printf("Altura Charlinho: %.3f\n", Altura_Charlinho);
//		printf("Altura Bossa: %.3f\n\n", Altura_Bossa);
//		printf("Acumula��o do Ano: %d\n", ano);
	
	}
	
	printf("Serao necessarios %d anos para a Altura do Charlinho ultrapassar a Altura de Bossa\n", ano-1); 

//  Foi subtraido uma unidade do ano pois o la�o for termina adicionando uma unidade a mais na variavel ano.
	
	system("pause");
}
