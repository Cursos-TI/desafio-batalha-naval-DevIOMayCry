#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tabuleiro[10][10]; 
    int i, j; // i = linhas e j = colunas

    // 1. Inicializar o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Criar navios (3 posições cada)
    int navio1[3] = {3, 3, 3}; // horizontal
    int navio2[3] = {3, 3, 3}; // vertical
    int navio3[3] = {3, 3, 3}; // diagonal
    int navio4[3] = {3, 3, 3}; // diagonal


    // 3. Posicionar o navio1 (horizontal) na linha 2, coluna 4
    for (j = 0; j < 3; j++) {
        tabuleiro[2][4 + j] = navio1[j];
    }

    // 4. Posicionar o navio2 (vertical) na linha 5, coluna 7
    for (i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = navio2[i];
    }

    // 5. Posicionar o navio3 (diagonal)
    for (i = 0; i < 3; i++) {
        tabuleiro[5 + i][0 + i] = navio3 [i];
    }

    // 6. Posicionar o navio4 (diagonal)
    for (i = 0; i < 3; i++){
        tabuleiro[8 - i][4 + i] = navio4 [i];
    }

    // 6. Exibir o tabuleiro
    printf("   ");
    for (j = 0; j < 10; j++) {
    printf("%c ", 'A' + j); // Cabeçalho das colunas com letras
    }
    printf("\n");

    for (i = 0; i < 10; i++) { // linhas de 0 a 9
    printf("%d  ", i); // Cabeçalho das linhas com números
        for (j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }



    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
