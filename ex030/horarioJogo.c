#include<stdio.h>
#include<stdlib.h>

//	Faça um programa que receba a hora de
//	início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras:
//	hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o
//	tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
//	terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min
//	até as 23hr29min.

int main(){
	
	int hora1, minuto1, hora2, minuto2, horaDuracao, minutoDuracao;
	
	printf("Informe a hora inicial: ");
	scanf("%d", &hora1);
	
	printf("\nInforme o minuto inicial: ");
	scanf("%d", &minuto1);
	
	// Apresenta horario inicial
	
	if (hora1 >= 0  && hora1 < 25){
		if (minuto1 >= 0 < 60){
			if(hora1 < 10){
				if (minuto1 < 10){
					printf("\nHorario Inicial: 0%d:0%d\n", hora1, minuto1);
				} else {
					printf("\nHorario Inicial: 0%d:%d\n", hora1, minuto1);
				}
			} else {
				if (minuto1 < 10){
					printf("\nHorario Inicial: %d:0%d\n", hora1, minuto1);
				} else {
					printf("\nHorario Inicial: %d:%d\n", hora1, minuto1);
				}
				
			}
		}
	} else {
		printf("\nValor de horario Invalido\n");
	}
	
	printf("\nInforme a hora final: ");
	scanf("%d", &hora2);
	
	printf("\nInforme o minuto final: ");
	scanf("%d", &minuto2);
	
	// Apresenta horario final
	
	if (hora2 >= 0  && hora2 < 25){
		if (minuto2 >= 0 < 60){
			if(hora2 < 10){
				if (minuto2 < 10){
					printf("\nHorario Final: 0%d:0%d\n", hora2, minuto2);
				} else {
					printf("\nHorario Final: 0%d:%d\n", hora2, minuto2);
				}
			} else {
				if (minuto2 < 10){
					printf("\nHorario Final: %d:0%d\n", hora2, minuto2);
				} else {
					printf("\nHorario Final: %d:%d\n", hora2, minuto2);
				}
				
			}
		}
	} else {
		printf("\nValor de horario Invalido\n");
	}
	
	// Calcula duração do jogo
	
	if (minuto2 < minuto1 ){
		minuto2 = minuto2 + 60;
		hora2 = hora2 - 1;
	}
	
	if (hora1 > hora2){
		hora2 = hora2 + 24;
	}
	
	horaDuracao = hora2 - hora1;
	minutoDuracao = minuto2 - minuto1;
	
	// Apresenta duração do jogo
	
	
	if (horaDuracao < 10){
		if (minutoDuracao < 10){
			printf("\n\nHorario de duracao do Jogo: 0%dh e 0%dmin\n", horaDuracao, minutoDuracao);
		} else{
			printf("\n\nHorario de duracao do Jogo: 0%dh e %dmin\n", horaDuracao, minutoDuracao);
		} 
	} else {
		if (minutoDuracao < 10){
			printf("\n\nHorario de duracao do Jogo: %dh e 0%dmin\n", horaDuracao, minutoDuracao);
		} else {
			printf("\n\nHorario de duracao do Jogo: %dh e %dmin\n", horaDuracao, minutoDuracao);
		}
	}
		
	
	system("pause");
}
