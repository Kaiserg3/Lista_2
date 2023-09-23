#include <stdio.h>

int main() {
    double numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%lf", &numerador);

    // Repete a leitura até que um denominador não nulo seja fornecido
    do {
        printf("Digite o denominador (não pode ser zero): ");
        scanf("%lf", &denominador);
    } while (denominador == 0);

    // Realiza a divisão
    resultado = numerador / denominador;

    printf("Resultado da divisão: %.2lf\n", resultado);

    return 0;
}
