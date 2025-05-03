#include <stdio.h>
#include <locale.h>
int main(){
	float investimento1, investimento2, investimento3;
	float premioTotal;
	float totalInvestido;
	float percentual1, percentual2, percentual3;
	float ganho1, ganho2, ganho3;
	setlocale (LC_ALL, "Portuguese");
	printf("Digite o primeiro valor investido pelo primeiro apostador:");
	scanf("%f", &investimento1);
	printf("Digite o segundo valor investido pelo segundo apostador:");
	scanf("%f", &investimento2);
	printf("Digite o terceiro valor investido pelo terceiro apostador:");
	scanf("%f", &investimento3);
	
	totalInvestido = investimento1 + investimento2 + investimento3;
	
	percentual1 = (investimento1 / totalInvestido) * 100;
	percentual2 = (investimento2 / totalInvestido) * 100;
	percentual3 = (investimento3 / totalInvestido) * 100;
	
	
	ganho1 = (percentual1 / 100) * premioTotal;
	ganho2 = (percentual2 / 100) * premioTotal;
	ganho3 = (percentual3 / 100) * premioTotal;
	
	printf("\n--- Resultado da Divisão do Prêmio ---\n");
	printf("Total investido 1: R$ %.2\n", totalInvestido);
	
	printf("\nApostador 1 investiu: R$ %.2f (%.2f%%)\n", investimento1, percentual1);
	printf("Ganho do Apostador 1: R$ %.2f\n", ganho1);
	
	printf("\nApostador 2 investiu: R& % .2f (%.2f%%)\n", investimento2, percentual2);
	printf("Ganho do Apostador 2: R$ %.2f\n", ganho2);
	
	printf("\nApostador 3 investiu: R& %.2f (%.3f%%)\n", investimento3, percentual3);
	printf("\nGanho do Apostador 3: R$ %.2f\n", ganho3);
	
	return 0;
}
