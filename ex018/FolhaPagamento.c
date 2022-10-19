#include <stdio.h>
#include <stdlib.h>

/*Descontar imposto de renda
 3% Desconto Sindicato 
 11% Salario Bruto (não é descontado)
   
 	Desconto do Imposto de Renda:
 		Salario Bruto até 900: Isento
 		Salario Bruto até 1500: 5% de desconto
 		Salario Bruto até 2500: 10% Desconto
 		acima de 2500: 20 % de desconto
 		
		 */

int main(){
	
	int horasTrabalhadas, percentualImpostoRenda;
	float salarioBruto, salarioLiquido, descontoSindicato, calculoFGTS, calculoImpostoRenda, TotalDescontos;
	
	printf("Informe quantas horas você trabalhou: ");
	scanf("%d", &horasTrabalhadas);
	
	salarioBruto = 5.00*horasTrabalhadas;	
	
	if (salarioBruto <= 900.00){
		percentualImpostoRenda = 0;
	} else {
			if (salarioBruto <= 1500.00){
			percentualImpostoRenda = 5;
		} else {
			if (salarioBruto <= 2500.00){
				percentualImpostoRenda = 10;
			} else {
				percentualImpostoRenda = 20;
			}
		}
	}
	
	descontoSindicato = salarioBruto*3.00/100.00;
	calculoFGTS = salarioBruto*11.00/100.00;	
	calculoImpostoRenda = salarioBruto*percentualImpostoRenda/100.00;
	TotalDescontos = descontoSindicato + calculoImpostoRenda;
	
	salarioLiquido = salarioBruto - TotalDescontos;
	
	printf("\n\nSalario Bruto (Valor Hora: 5 * horas trabalhadas: %d)-------:R$ %.2f\n\n", horasTrabalhadas, salarioBruto);
	printf("\n(-) Desconto do Sindicato (3%%)  -----------------------------:R$ %.2f\n\n", descontoSindicato);
	printf("\n(-) IR (%d %%) -----------------------------------------------:R$ %.2f\n\n", percentualImpostoRenda, calculoImpostoRenda);
	printf("FGTS(11%%)------------------------------------------------------:R$ %.2f\n\n", calculoFGTS);
	printf("Total de descontos----------------------------------------------:R$ %.2f\n\n", TotalDescontos);
	printf("Salario Liquido-------------------------------------------------:R$ %.2f\n\n", salarioLiquido);
	
	
	system("pause");
}
