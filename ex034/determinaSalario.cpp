#include <stdio.h>
#include <stdlib.h>

//	Um funcionário de uma empresa recebe
//	aumento salarial anualmente. Sabe-se que:
//	a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
//	b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
//	c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
//	da porcentagem do ano anterior.
//	Faça um programa que receba o ano atual determine o salário atual desse funcionário.

int main(){
	
	int anoInicial, anoAtual;
	float salario = 1000, porcentagemSalario = 1.5, salarioReajustado, adicionalSalario; 
	
// variavel salario e porcentagemSalario valem o Salario inicial no ano de 2015 e a porcentagem de aumento no ano de 2016
	 
	adicionalSalario = (porcentagemSalario*salario)/100; //Ano 2016
	salarioReajustado = salario + adicionalSalario;
	
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	
	if (anoAtual >= 2016){
	
		for (anoInicial = 2017; anoInicial <= anoAtual; anoInicial++){
		
			porcentagemSalario *= 2;
			adicionalSalario = (porcentagemSalario*salarioReajustado)/100;
			salarioReajustado += adicionalSalario;
			
		}
		printf("Seu salario atual no ano de %d equivale a: R$ %.2f\n", anoAtual, salarioReajustado);
	} else {
		printf("Ano invalido\n");
	}
	
	system("pause");
}
