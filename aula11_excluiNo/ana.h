#include <stdio.h>
#include <stdlib.h>
#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

typedef struct No{
    int valor;
    struct No* proximo;
} No;

No* criarNo (int valor);
void excluirNo (No **primeiro, int valor);

#endif// NO_H_INCLUDED
