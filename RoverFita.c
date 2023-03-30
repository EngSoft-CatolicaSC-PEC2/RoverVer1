/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int posicao = 0;

int movimentar (char[], int);

int  main ()
{
  char movimentos[] = { 'E', 'E', 'F', 'E', 'E' };
  printf ("Rover em Marte \n");
  posicao = movimentar (movimentos, 5);
  printf ("Nova posicao: %d", posicao);
  return 0;
}

int movimentar (char movimentos[], int tam)

{
  for (int i = 0; i < tam; i++)    
  {
        if (movimentos[i] == 'D')
    	{
    	  posicao++;
    	}
        else if (posicao > 0 && movimentos[i] == 'E')
    	{
    	  posicao--;
    	}
      else
    	{
    	  printf ("Comando inválido na posicao: %d\n", i);
    	}

    }
    return posicao;
}
