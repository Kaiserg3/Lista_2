#include <stdio.h>

int main() {
    int altura_jose = 150; // Altura inicial de José em centímetros
    int altura_pedro = 110; // Altura inicial de Pedro em centímetros
    int anos = 0; // Inicializa o contador de anos

    // Enquanto a altura de Pedro for menor ou igual a de José
    while (altura_pedro <= altura_jose) {
        altura_jose += 2; // José cresce 2 cm por ano
        altura_pedro += 3; // Pedro cresce 3 cm por ano
        anos++; // Incrementa o contador de anos
    }

    // Quando Pedro for maior que José, imprime o resultado
    printf("Pedro será maior que José em %d anos.\n", anos);

    return 0;
}
