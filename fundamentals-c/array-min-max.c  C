#include <stdio.h>

/**
 * Projeto: Analise de Extremos em Vetores
 * Objetivo: Manipular arrays e comparacao de valores.
 */

int main() {
    int n, i;
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    int valores[n];
    for(i = 0; i < n; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int min = valores[0];
    int max = valores[0];

    for(i = 1; i < n; i++) {
        if(valores[i] < min) min = valores[i];
        if(valores[i] > max) max = valores[i];
    }

    printf("\n--- Analise Concluida ---\n");
    printf("Menor valor encontrado: %d\n", min);
    printf("Maior valor encontrado: %d\n", max);

    return 0;
}
