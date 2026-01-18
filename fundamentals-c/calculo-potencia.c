#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;
    printf("Digite a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    resultado = pow(base, expoente);
    printf("%.2f elevado a %.2f e %.2f\n", base, expoente, resultado);
    return 0;
}
