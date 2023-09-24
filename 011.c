#include <stdio.h>

int main() {
    int limite_inferior, limite_superior;

    // Solicita os limites da faixa ao usuário
    printf("Digite o limite inferior da faixa: ");
    scanf("%d", &limite_inferior);

    printf("Digite o limite superior da faixa: ");
    scanf("%d", &limite_superior);

    printf("Quadrados dos números inteiros múltiplos de 4 na faixa de %d a %d:\n", limite_inferior, limite_superior);

    // Verifica qual é o menor e o maior limite
    int menor_limite, maior_limite;
    if (limite_inferior < limite_superior) {
        menor_limite = limite_inferior;
        maior_limite = limite_superior;
    } else {
        menor_limite = limite_superior;
        maior_limite = limite_inferior;
    }

    for (int i = menor_limite; i <= maior_limite; i++) {
        if (i % 4 == 0) {
            int quadrado = i * i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }

    return 0;
}
