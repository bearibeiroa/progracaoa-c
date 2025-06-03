#include <stdio.h>

int main() {
    // Definindo constantes para os movimentos das peças
    const int MOVIMENTO_BISPO = 5;  // 5 casas na diagonal superior direita
    const int MOVIMENTO_TORRE = 5;  // 5 casas para a direita
    const int MOVIMENTO_RAINHA = 8; // 8 casas para a esquerda

    printf("=== Simulação de Movimentos no Xadrez ===\n\n");

    // ===== MOVIMENTO DO BISPO =====
    // O bispo se move 5 casas na diagonal superior direita
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    
    // Usando estrutura de repetição FOR para o movimento do Bispo
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        // Diagonal superior direita = combinação de "Cima" e "Direita"
        printf("Movimento %d: ", i);
        printf("Cima\n");
        printf("Movimento %d: ", i);
        printf("Direita\n");
    }
    printf("\n");

    // ===== MOVIMENTO DA TORRE =====
    // A torre se move 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    
    // Usando estrutura de repetição WHILE para o movimento da Torre
    int contadorTorre = 1;
    while (contadorTorre <= MOVIMENTO_TORRE) {
        printf("Movimento %d: ", contadorTorre);
        printf("Direita\n");
        contadorTorre++;
    }
    printf("\n");

    // ===== MOVIMENTO DA RAINHA =====
    // A rainha se move 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    
    // Usando estrutura de repetição DO-WHILE para o movimento da Rainha
    int contadorRainha = 1;
    do {
        printf("Movimento %d: ", contadorRainha);
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOVIMENTO_RAINHA);

    printf("\n=== Fim da Simulação ===\n");

    return 0;
}
