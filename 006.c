#include <stdio.h>

int main() {
    int voto;
    int votos_paulo = 0;
    int votos_renata = 0;
    int votos_branco = 0;
    int votos_nulos = 0;

    printf("Eleições Presidenciais\n");
    printf("Candidatos:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em Branco\n");
    printf("Digite o número do candidato (ou um número negativo para encerrar):\n");

    while (1) {
        printf("Seu voto: ");
        scanf("%d", &voto);

        if (voto < 0) {
            break; // Encerra a votação
        } else if (voto == 5) {
            votos_paulo++;
        } else if (voto == 7) {
            votos_renata++;
        } else if (voto == 0) {
            votos_branco++;
        } else {
            votos_nulos++;
        }

        printf("Voto registrado. Confirma? (S para sim, qualquer outra tecla para não): ");
        char confirmacao;
        scanf(" %c", &confirmacao);

        if (confirmacao != 'S' && confirmacao != 's') {
            printf("Voto cancelado.\n");
        }
    }

    int total_votos = votos_paulo + votos_renata + votos_branco + votos_nulos;

    printf("Relatório da Eleição:\n");
    printf("Total de votos: %d\n", total_votos);
    printf("Votos em Paulo (código 5): %d (%.2f%%)\n", votos_paulo, (float)votos_paulo / total_votos * 100);
    printf("Votos em Renata (código 7): %d (%.2f%%)\n", votos_renata, (float)votos_renata / total_votos * 100);
    printf("Votos em Branco (código 0): %d (%.2f%%)\n", votos_branco, (float)votos_branco / total_votos * 100);
    printf("Votos Nulos: %d (%.2f%%)\n", votos_nulos, (float)votos_nulos / total_votos * 100);

    if (votos_paulo > votos_renata) {
        printf("Paulo é o candidato eleito!\n");
    } else if (votos_renata > votos_paulo) {
        printf("Renata é a candidata eleita!\n");
    } else {
        printf("A eleição terminou em empate!\n");
    }

    return 0;
}
