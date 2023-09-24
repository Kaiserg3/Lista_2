#include <stdio.h>

int main() {
    int limite_inferior, limite_superior;
    int somatorio = 0;

    // Solicita os limites da faixa ao usuário
    printf("Digite o limite inferior da faixa: ");
    scanf("%d", &limite_inferior);

    printf("Digite o limite superior da faixa: ");
    scanf("%d", &limite_superior);

    // Verifica qual é o menor e o maior limite
    int menor_limite, maior_limite;
    if (limite_inferior < limite_superior) {
        menor_limite = limite_inferior;
        maior_limite = limite_superior;
    } else {
        menor_limite = limite_superior;
        maior_limite = limite_inferior;
    }

    // Calcula o somatório dos números pares na faixa
    for (int i = menor_limite; i <= maior_limite; i++) {
        if (i % 2 == 0) {
            somatorio += i;
        }
    }

    printf("O somatório dos números pares na faixa de %d a %d é: %d\n", menor_limite, maior_limite, somatorio);

    return 0;
}
