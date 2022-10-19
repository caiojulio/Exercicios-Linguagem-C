#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char Genero;
	
	printf("Digite F para Feminino e M para Masculino: ");
	scanf("%c", &Genero);
	
	if (Genero == 'f' || Genero == 'F'){
		printf("\nF - FEMININO\n\n");
	} else{
		if (Genero == 'm' || Genero == 'M'){
			printf("\nM - MASCULINO\n\n");
		} else {
			printf("\nSexo Invalido\n\n");
		}
	}
	
	//Estrutura de decisão reestruturada
	
/*	if (Genero == 'F' || Genero == 'M'){
		if (Genero == 'F'){
			printf("\nF - FEMININO\n");
		} else {
			printf("\nM - MASCULINO\n");
		}
	} else {
		printf("\nSexo Invalido\n");
	} */
	
	//Utilizando Switch Case
	
/*	switch(Genero){
		case 'f':
			printf("\nF - FEMININO\n");
			break;
		case 'm':
			printf("\nM - Masculino");
			break;
		default:
			printf("\nSexo Invalido\n");
			break;
	} */
	
	
	system("pause");
}
