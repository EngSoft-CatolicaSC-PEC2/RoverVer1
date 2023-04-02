
#include <stdio.h>

#define DIREITA 'D'
#define ESQUERDA 'E'
int posicao = 0;

int movimentar(char[], int);

int main() {
    char movimentos[] = {ESQUERDA, ESQUERDA, DIREITA, DIREITA, ESQUERDA};
    printf("Rover em Marte \n");
    posicao = movimentar(movimentos, 5);
    printf("Nova posicao: %d", posicao);
    return 0;
}

int movimentar(char movimentos[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (movimentos[i] == DIREITA) {
            posicao++;
        } else if (posicao > 0 && movimentos[i] == ESQUERDA) {
            posicao--;
        } else {
            printf("Comando inválido na posicao: %d\n", i);
        }

    }
    return posicao;
}
