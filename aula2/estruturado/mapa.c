#include "mapa.h"


void mapaCarregar();
void mapaMarcar(int, int, char);
void mapaImprimir();
char mapaLer(int , int );


void mapaMarcar(int linha, int coluna, char marca)
{
    mapa[linha][coluna] = marca;
}

char mapaLer(int linha, int coluna)
{
    return mapa[linha][coluna];
}

void mapaCarregar()
{
    for (int linha = 0; linha < TAM_MAPA; linha++)
    {
        for (int coluna = 0; coluna < TAM_MAPA; coluna++)
        {
            mapa[linha][coluna] = TERRENO;
        }
    }
}

void maapaImprimir()
{
    printf("\n *** ***\n");
    for (int linha = 0; linha < TAM_MAPA; linha++)
    {
        for (int coluna = 0; coluna < TAM_MAPA; coluna++)
        {
            printf("%c ", mapa[linha][coluna]);
        }
        printf("\n"); // Quebra de linha
    }
}
