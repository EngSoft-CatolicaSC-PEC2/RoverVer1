#ifndef MAPA_H
#define MAPA_H


#include <stdio.h>

#define TAM_MAPA 8
#define DESTINO 'D'
#define RASTRO 'R'
#define BLOQUEIO 'B'
#define TERRENO '*'
char mapa[TAM_MAPA][TAM_MAPA];
void mapaCarregar();
void mapaMarcar(int, int, char);
void mapaImprimir();
char mapaLer(int , int );



#endif
