#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios

    // Criando um tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posicionando navio horizontal (tamanho 3) na linha 1 (índice 0)
    int navioH[3][2] = {{0,0}, {0,1}, {0,2}};

    // Posicionando navio vertical (tamanho 2) na coluna 5 (índice 4)
    int navioV[2][2] = {{3,4}, {4,4}};

    // Exibindo coordenadas do navio horizontal
    printf("Navio Horizontal:\n");
    for(int i = 0; i < 3; i++) {
        // Adiciona +1 para mostrar linha/coluna iniciando do 1
        printf("Parte %d: Linha %d, Coluna %d\n", i+1, navioH[i][0]+1, navioH[i][1]+1);
        tabuleiro[navioH[i][0]][navioH[i][1]] = 1; // marca a posição no tabuleiro
    }

    // Exibindo coordenadas do navio vertical
    printf("\nNavio Vertical:\n");
    for(int i = 0; i < 2; i++) {
        printf("Parte %d: Linha %d, Coluna %d\n", i+1, navioV[i][0]+1, navioV[i][1]+1);
        tabuleiro[navioV[i][0]][navioV[i][1]] = 1;
    }

    // Exibindo o tabuleiro (1 = navio, 0 = vazio)
    printf("\nTabuleiro (Linha x Coluna, começando do 1):\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
