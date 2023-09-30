#include <stdio.h>

int main() {
    int somatorioDivisiveisPor3 = 0;
    int somatorioDivisiveisPor5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i >= 0 && i <= 100) {
            if (i % 3 == 0) {
                somatorioDivisiveisPor3 += i;
            }
        } else {
            if (i % 5 == 0) {
                somatorioDivisiveisPor5 += i;
            }
        }
    }

    printf("Somatório dos números divisíveis por 3 no intervalo [0,100]: %d\n", somatorioDivisiveisPor3);
    printf("Somatório dos números divisíveis por 5 no intervalo (100,200]: %d\n", somatorioDivisiveisPor5);

    return 0;
}
