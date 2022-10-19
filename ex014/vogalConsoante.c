#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char vogal;
	
	printf("Digite uma letra: ");
	scanf("%c", &vogal);
	
	if (vogal == 'a' || vogal == 'A'){
		printf("\na letra %c eh uma vogal\n", vogal);
	} else {
		if (vogal == 'e' || vogal == 'E'){
			printf("\na letra %c eh uma vogal\n", vogal);
		} else {
			if (vogal == 'i' || vogal == 'I'){
			printf("\na letra %c eh uma vogal\n", vogal);
			} else {
				if (vogal == 'o' || vogal == 'O'){
					printf("\na letra %c eh uma vogal\n", vogal);
				} else {
					if (vogal == 'u' || vogal == 'U'){
						printf("\na letra %c eh uma vogal\n", vogal);
					} else {
						printf("\na letra %c eh uma consoante\n", vogal);
					}
				}
			}
		}
	}
	
	//Utilizando switch case:
	
/*	switch(vogal){
		case 'a':
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
		case 'e':
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
		case 'i':
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
		case 'o':
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
		case 'u':
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
		default:
			printf("\na letra %c eh uma vogal\n", vogal);
			break;
	}
*/
	system("pause");
}
