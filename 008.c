#include <stdio.h>
#include <math.h>

int main() {
    double valor_mercadoria, entrada, prestacao;

    // Solicita o valor da mercadoria
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%lf", &valor_mercadoria);

    // Calcula o valor da entrada
    entrada = valor_mercadoria / 3.0;

    // Arredonda a entrada para cima para garantir que seja maior ou igual às prestações
    entrada = ceil(entrada);

    // Calcula o valor das duas prestações
    prestacao = (valor_mercadoria - entrada) / 2.0;

    printf("Valor da entrada: R$ %.2lf\n", entrada);
    printf("Valor das duas prestações: R$ %.2lf\n", prestacao);

    return 0;
}
