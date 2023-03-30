#include <stdio.h>
#include "mapa.h"
#include "rover.h"

int main();


int main()
{
    mapaCarregar();
    roverSetInicio(2,2);
    roverSetDestino(4,4);
    
    mapaImprimir();

    printf("\n *** ***\n");

    int resultadoMovimento =0;
    do
    {
        resultadoMovimento = roverMover(DIREITA);
        mapaImprimir();
    } while (resultadoMovimento == MOVIMENTO_FINAL);
}
