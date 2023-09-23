#include <stdio.h>

int main() {
    int n, maior, menor;

    // Solicita ao usuário o primeiro valor
    printf("Digite um valor (ou zero para sair): ");
    scanf("%d", &n);

    // Inicializa o maior e o menor com o primeiro valor
    maior = n;
    menor = n;

    // Enquanto o usuário não digitar zero
    while (n != 0) {
        // Solicita ao usuário o próximo valor
        printf("Digite um valor (ou zero para sair): ");
        scanf("%d", &n);

        // Verifica se o novo valor é maior que o maior valor atual
        if (n > maior) {
            maior = n;
        }

        // Verifica se o novo valor é menor que o menor valor atual
        if (n < menor && n != 0) {
            menor = n;
        }
    }

    // Imprime o maior e o menor valor
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
