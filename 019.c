#include <stdio.h>

int main() {
    int limiteInferior, limiteSuperior;
    int soma = 0, contador = 0;

    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("Digite o limite superior: ");
    scanf("%d", &limiteSuperior);

    if (limiteInferior > limiteSuperior) {
        printf("Limite inferior deve ser menor ou igual ao limite superior.\n");
    } else {
        for (int i = limiteInferior; i <= limiteSuperior; i++) {
            soma += i;
            contador++;
        }

        if (contador > 0) {
            double media = (double)soma / contador;
            printf("A média aritmética dos números na faixa [%d, %d] é %.2lf\n", limiteInferior, limiteSuperior, media);
        } else {
            printf("Não há números na faixa especificada.\n");
        }
    }

    return 0;
}
