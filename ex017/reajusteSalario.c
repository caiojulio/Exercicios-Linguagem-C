#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int percentual;
	float salario, salarioReajustado, valorAumento, percentualSalario;
	
	printf("Informe seu salario: R$ ");
	scanf("%f", &salario);
	
	if (salario <= 280.00){
		percentual = 20;
		percentualSalario = percentual*salario/100.00;
		salarioReajustado = salario+percentualSalario;
		valorAumento = salarioReajustado - salario;
	} else {
		if (salario < 700.00){
			percentual = 15;
			percentualSalario = percentual*salario/100.00;
			salarioReajustado = salario+percentualSalario;
			valorAumento = salarioReajustado - salario;
		} else {
			if (salario < 1500.00){
				percentual = 10;
				percentualSalario = percentual*salario/100.00;
				salarioReajustado = salario+percentualSalario;
				valorAumento = salarioReajustado - salario;
			} else {
				percentual = 5;
				percentualSalario = percentual*salario/100.00;
				salarioReajustado = salario+percentualSalario;
				valorAumento = salarioReajustado - salario;
			}
		}
	}
	
	printf("\nO salario antes do reajuste: R$%.2f\n", salario);
	printf("\nO percentual de aumento aplicado: %d %%\n", percentual);
	printf("\nO valor do aumento: R$ %.2f\n", valorAumento);
	printf("\nO novo salario: R$ %.2f\n\n", salarioReajustado);
	
	system("pause");
}
