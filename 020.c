#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    printf("Fatoriais dos números ímpares na faixa de 1 a 10:\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) { // Verifica se o número é ímpar
            int fatorial = calcularFatorial(i);
            printf("%d! = %d\n", i, fatorial);
        }
    }

    return 0;
}
