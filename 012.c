#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário o número para o qual deseja calcular a tabuada
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Imprime a tabuada de 1 a 10 para o número fornecido
    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
