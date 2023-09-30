#include <stdio.h>
#include <inttypes.h> // Para usar um tipo de dados grande o suficiente para armazenar o resultado

int main() {
    uint64_t totalGrains = 0; // Usamos uint64_t para armazenar números grandes

    for (int quadro = 1; quadro <= 64; quadro++) {
        uint64_t grainsNoQuadro = 1ULL << (quadro - 1); // Cálculo dos grãos no quadro atual
        totalGrains += grainsNoQuadro; // Adiciona os grãos no quadro atual ao total
    }

    printf("Total de grãos de trigo no tabuleiro de xadrez: %" PRIu64 "\n", totalGrains);

    return 0;
}
