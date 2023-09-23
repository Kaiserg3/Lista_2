#include <stdio.h>

int main() {
    int termo1 = 0, termo2 = 1, proximo_termo, n = 20;

    printf("Série de Fibonacci até o vigésimo termo:\n");

    for (int i = 1; i <= n; i++) {
        if (i <= 1) {
            proximo_termo = 1;
        } else {
            proximo_termo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximo_termo;
        }
        printf("%d ", proximo_termo);
    }

    printf("\n");

    return 0;
}
