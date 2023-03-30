/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int linha = 0;
int coluna = 0;
int posicao = 0;
int tamMatriz = 4;

int movimentar (char[], int, int);

int  main ()
{
  char movimentos[] = { 'D', 'D','D','D','D','C' };
  printf ("Rover em Marte \n");
  posicao = movimentar (movimentos, sizeof(movimentos), tamMatriz);
  printf ("Nova posicao: %d", posicao);
  return 0;
}

int movimentar (char movimentos[], int tam, int tamMatriz)
{
    for(int i = 0; i < tam; i++)
    {
       if(coluna < tamMatriz -1 && movimentos[i] == 'D')
       {
            coluna++;
       }
       else if(coluna > 0 && movimentos[i] == 'E')
       {
            coluna--;
       }
       else if(linha < tamMatriz -1  && movimentos[i] == 'B')
       {
            linha++;
       }
       else if(linha > 0  && movimentos[i] == 'C')
       {
            linha--;
       }
       else{
            printf ("Comando inválido na posicao: %d\n", i);
       }
    }
    
    return linha*tam+coluna;
}
