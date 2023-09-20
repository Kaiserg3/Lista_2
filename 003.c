#include <stdio.h>

int main() {
    int f, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &f);

    if (f < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        for (int i = 1; i <= f; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d.\n", f, fatorial);
    }

    return 0;
}
