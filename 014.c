#include <stdio.h>

int main() {
    int limite_inferior, limite_superior;
    int quantidade_divisiveis = 0;

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

    // Conta a quantidade de números divisíveis por 3 na faixa
    for (int i = menor_limite; i <= maior_limite; i++) {
        if (i % 3 == 0) {
            quantidade_divisiveis++;
        }
    }

    printf("A quantidade de números divisíveis por 3 na faixa de %d a %d é: %d\n", menor_limite, maior_limite, quantidade_divisiveis);

    return 0;
}
