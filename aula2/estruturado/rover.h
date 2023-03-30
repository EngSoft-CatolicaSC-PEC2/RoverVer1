#ifndef ROVER_H
#define ROVER_H

#include <stdio.h>
#include "mapa.h"

#define DIREITA 'D'
#define ESQUERDA 'E'
#define CIMA 'C'
#define BAIXO 'B'
#define MOVIMENTO_FINAL  10
#define MOVIMENTO_SUCESSO  1
#define MOVIMENTO_ERROR  0
int roverLinha = 0;
int roverColuna = 0;
int destinoLinha = 0;
int destinoColuna = 0;
int roverMover(char);
void roverSetInicio(int, int);
void roverSetDestino(int, int);
void roverFazerRastro();
int ehLimiteDiretoMapa();
int ehLimiteEsquerdoMapa();
int ehLimiteSuperiorMapa();
int ehLimiteInferiorMapa();
int encontrouFinal();

#endif
