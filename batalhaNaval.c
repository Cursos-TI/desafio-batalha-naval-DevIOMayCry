#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabuleiro[10][10]; 
    int i, j;

    // 1. Inicializar o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Criar habilidade cone (iniciando pelo centro)
    int ConeAltura = 3;
    int ConeColuna = 5;
    int ConeLinha = 5;

    // 3. Posicionar o cone
    for (int i = 0; i < ConeAltura; i++) {
        for (int j = -i; j <= i; j++) {
            int linha = ConeLinha + i;               
            int coluna = ConeColuna + j;

            // garante que não sai do tabuleiro
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                tabuleiro[linha][coluna] = 5;
            }
        }
    }


    // 4. Criar habilidade cruz (iniciando pelo centro)
    int CruzLinha = 2;
    int CruzColuna = 2;

    // 5. Posicionar a cruz
    for (int j = 0; j < 5; j++) {
        tabuleiro[CruzLinha][j] = 5; // marca toda a linha central
    }

    for (int i = 0; i < 5; i++) {
        tabuleiro[i][CruzColuna] = 5; // marca toda a coluna central
    }


    // 6. Criar habilidade octa (iniciando pelo centro)
        // Centro do octaedro
    int OctaLinha = 3;
    int OctaColuna = 7;
    int raio = 1; // altura do octaedro (quantas linhas acima/abaixo do centro)

    // Preencher o octaedro
    for (i = -raio; i <= raio; i++) {
        int maxColunas = raio - abs(i); // largura do octaedro na linha i
        for (j = -maxColunas; j <= maxColunas; j++) {
            tabuleiro[OctaLinha + i][OctaColuna + j] = 5; // marca a área do octaedro
        }
    }


    // 6. Exibir o tabuleiro
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf("%c ", 'A' + j); // Cabeçalho das colunas
    }
    printf("\n");

    for (i = 0; i < 10; i++) { 
        printf("%d  ", i); // Cabeçalho das linhas
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}