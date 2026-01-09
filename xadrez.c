#include <stdio.h>

// Definição de constantes para os limites de movimento
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// --- FUNÇÕES RECURSIVAS (Nível Mestre) ---

// Função recursiva para o Bispo: Diagonal (Cima e Direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    
    // Simulação de loop aninhado via lógica ou representação
    printf("Cima, Direita\n");
    
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para a Torre: Direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha: Esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("### DESAFIO MATECHECK - MOVIMENTAÇÃO ###\n\n");

    // Implementação do Bispo (Recursivo)
    printf("Movimentando o Bispo (%d casas):\n", MOV_BISPO);
    moverBispo(MOV_BISPO);
    printf("\n");

    // Implementação da Torre (Recursivo)
    printf("Movimentando a Torre (%d casas):\n", MOV_TORRE);
    moverTorre(MOV_TORRE);
    printf("\n");

    // Implementação da Rainha (Recursivo)
    printf("Movimentando a Rainha (%d casas):\n", MOV_RAINHA);
    moverRainha(MOV_RAINHA);
    printf("\n");

    // --- NÍVEL AVENTUREIRO/MESTRE: CAVALO ---
    // Movimentação em L: 2 para Cima, 1 para a Direita
    // Uso de loops aninhados, múltiplas variáveis e break/continue
    printf("Movimentando o Cavalo (Em L):\n");

    for (int i = 0, j = 1; i < 1; i++) { 
        // Loop para a parte vertical do L
        int passo_vertical = 0;
        while (passo_vertical < 3) {
            passo_vertical++;
            
            if (passo_vertical <= 2) {
                printf("Cima\n");
                continue; // Pula para a próxima iteração até completar 2 casas
            }
            
            // Loop aninhado para a parte horizontal
            for (int k = 0; k < 1; k++) {
                printf("Direita\n");
                break; // Finaliza o movimento horizontal
            }
            
            if (passo_vertical == 3) break; 
        }
    }

    return 0;
}