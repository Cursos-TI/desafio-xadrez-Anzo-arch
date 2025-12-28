#include <stdio.h>

// Função para simular o movimento do Bispo (diagonal)
void moverBispo(const int casas) {
    if (casas <= 0) {
        printf("Número de casas inválido para o Bispo.\n");
        return;
    }

    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casas) {
        printf("Casa %d: Movendo-se na diagonal\n", i);
        i++;
    }
}

// Função para simular o movimento da Torre (para a direita)
void moverTorre(const int casas) {
    if (casas <= 0) {
        printf("Número de casas inválido para a Torre.\n");
        return;
    }

    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= casas; i++) {
        printf("Casa %d: Movendo-se para a direita\n", i);
    }
}

// Função para simular o movimento da Rainha (para a esquerda)
void moverRainha(const int casas) {
    if (casas <= 0) {
        printf("Número de casas inválido para a Rainha.\n");
        return;
    }

    int i = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Casa %d: Movendo-se para a esquerda\n", i);
        i++;
    } while (i <= casas);
}

int main() {
    int casas = 5;  // Número de casas a serem percorridas

    moverBispo(casas);
    moverTorre(casas);
    moverRainha(casas);

    return 0;
}
