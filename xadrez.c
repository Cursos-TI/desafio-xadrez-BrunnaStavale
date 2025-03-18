#include <stdio.h>

void movimentar_bispo(int casas) {
    if (casas <= 0) return; 
    printf("Bispo - Diagonal superior direita - Casa %d\n", casas);
    movimentar_bispo(casas - 1);
}

void movimentar_torre(int casas) {
    if (casas <= 0) return;
    printf("Torre - Direita - Casa %d\n", casas);
    movimentar_torre(casas - 1);
}

void movimentar_cavalo(int movimentos) {
    if (movimentos <= 0) return;
    printf("Cavalo - Movimentação em L - Movimento %d\n", movimentos);
    movimentar_cavalo(movimentos - 1); 
}

int main() {
    printf("Movimentação do Bispo:\n");
    movimentar_bispo(5); 

    printf("\nMovimentação da Torre:\n");
    movimentar_torre(5); 

    printf("\nMovimentação do Cavalo:\n");
    movimentar_cavalo(1);

    return 0;
}
