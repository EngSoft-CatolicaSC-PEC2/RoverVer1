#include "rover.h"

void roverSetInicio(int linha, int coluna){
    roverLinha = linha;
    roverColuna = coluna;
    roverFazerRastro();
}

void roverSetDestino(int linha, int coluna){
    destinoLinha = linha;
    destinoColuna = coluna;
    mapaMarcar(roverLinha, roverColuna, DESTINO);
}

int roverMover(char comando)
{
    if (comando == DIREITA && ehLimiteDiretoMapa() != 0)
    {
        roverColuna++;
    }
    else if (comando == ESQUERDA && ehLimiteEsquerdoMapa() != 0)
    {
        roverColuna--;
    }
    if (comando == CIMA && ehLimiteSuperiorMapa() != 0)
    {
        roverLinha--;
    }
    else if (comando == BAIXO && ehLimiteInferiorMapa() != 0)
    {
        roverLinha++;
    }
    if (comando == CIMA && ehLimiteSuperiorMapa() != 0)
    {
        roverLinha--;
    } 
    else{
        return MOVIMENTO_ERROR;
    }
    roverFazerRastro();

    if(encontrouFinal()){
        return MOVIMENTO_FINAL;
    }
    else
    {
        return MOVIMENTO_SUCESSO;
    }
}

int encontrouFinal()
{
    return roverColuna == destinoColuna && roverLinha == destinoLinha;
}

int ehLimiteDiretoMapa()
{
    return roverColuna < TAM_MAPA;
}

int ehLimiteEsquerdoMapa()
{
    return roverColuna > 0;
}

int ehLimiteSuperiorMapa()
{
    return roverLinha > 0;
}

int ehLimiteInferiorMapa()
{
    return roverLinha < TAM_MAPA;
}

void roverFazerRastro()
{
    mapaMarcar(roverLinha, roverColuna, RASTRO);
}