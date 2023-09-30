#include <stdio.h>

int main() {
    int celsius;
    double fahrenheit;

    printf("Conversão de Graus Celsius para Fahrenheit\n");
    printf("------------------------------------------\n");
    printf("Celsius   |   Fahrenheit\n");
    printf("------------------------\n");

    for (celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3d°C      |   %.2lf°F\n", celsius, fahrenheit);
    }

    return 0;
}
