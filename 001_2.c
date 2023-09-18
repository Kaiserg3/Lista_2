#include <stdio.h>

int main() {
    int numeroDia;

    do {
        printf("Digite um numero de 1 a 7 (ou 0 para sair): ");
        scanf("%d", &numeroDia);

        switch (numeroDia) {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            case 3:
                printf("Terca-feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-feira\n");
                break;
            case 6:
                printf("Sexta-feira\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Numero de dia nao valido\n");
                break;
        }
    } while (numeroDia != 0);

    return 0;
}

