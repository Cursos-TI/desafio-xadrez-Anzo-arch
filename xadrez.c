#include <stdio.h>

// Função para simular o movimento do Bispo (diagonal)
void moverBispo(int casas) {
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casas) {
        printf("Casa %d: Movendo-se na diagonal\n", i);
        i++;
    }
}

// Função para simular o movimento da Torre (para a direita)
void moverTorre(int casas) {
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas; i++) {
        printf("Casa %d: Movendo-se para a direita\n", i);
    }
}

// Função para simular o movimento da Rainha (para a esquerda)
void moverRainha(int casas) {
    int i = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Casa %d: Movendo-se para a esquerda\n", i);
        i++;
    } while (i <= casas);
}

int main() {
    int casas = 5;  // Número de casas a serem percorridas

    // Simulação de movimento de cada peça
    moverBispo(casas);
    moverTorre(casas);
    moverRainha(casas);

    return 0;
}
