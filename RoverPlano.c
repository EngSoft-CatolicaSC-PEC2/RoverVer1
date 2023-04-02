
#include <stdio.h>

#define DIREITA 'D'
#define ESQUERDA 'E'
#define CIMA 'C'
#define BAIXO 'V'

int linha = 0;
int coluna = 0;
int posicao = 0;
int tamMatriz = 4;


int movimentar(char[], int, int);

int main() {
    char movimentos[] = {DIREITA, DIREITA, DIREITA, CIMA, ESQUERDA, BAIXO};
    printf("Rover em Marte \n");
    posicao = movimentar(movimentos, sizeof(movimentos), tamMatriz);
    printf("Nova posicao: %d", posicao);
    return 0;
}

int movimentar(char movimentos[], int tam, int tamMatriz) {
    for (int i = 0; i < tam; i++) {
        if (coluna < tamMatriz - 1 && movimentos[i] == DIREITA) {
            coluna++;
        } else if (coluna > 0 && movimentos[i] == ESQUERDA) {
            coluna--;
        } else if (linha < tamMatriz - 1 && movimentos[i] == BAIXO) {
            linha++;
        } else if (linha > 0 && movimentos[i] == CIMA) {
            linha--;
        } else {
            printf("Comando inválido na posicao: %d\n", i);
        }
    }

    return linha * tam + coluna;
}
