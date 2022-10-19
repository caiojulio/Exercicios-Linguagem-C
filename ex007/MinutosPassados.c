#include <stdio.h>
#include <stdlib.h>

//Programa recebe hora e calcula minutos que ja passaram

int main(){
	
	int hora, minuto, calculoMinutosFaltante, calculoMinutosPassaram;
	
	printf("Digite a hora: ");
	scanf("%d", &hora);
	
	printf("\nDigite os minutos: ");
	scanf("%d", &minuto);
	
	calculoMinutosPassaram = hora*60+minuto;
	calculoMinutosFaltante = 1440 - calculoMinutosPassaram;
	
	
	printf("\nJa se passaram %d Minutos no dia\n", calculoMinutosPassaram);
	printf("Faltam %d Minutos para o dia acabar\n", calculoMinutosFaltante);

	system("pause");
}
