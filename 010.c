#include <stdio.h>

int main() {
    int inicio = 15;
    int fim = 90;

    printf("Quadrados dos números inteiros múltiplos de 4 na faixa de %d a %d:\n", inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 4 == 0) {
            int quadrado = i * i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }

    return 0;
}
