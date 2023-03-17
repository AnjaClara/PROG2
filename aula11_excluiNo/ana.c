#include "ana.h"
#include <stdio.h>
#include <stdlib.h>

No *criarNo(int valor){
    No*novoNo = (No*)malloc(sizeof(No));
    novoNo->valor = valor;
    
    novoNo->proximo = NULL;
    return novoNo;
}

void excluirNo (No **primeiro, int valor){
    No* atual= *primeiro;
    No* anterior = NULL;
    while(atual !=NULL && atual -> valor !=valor){
        anterior= atual;
        atual = atual->proximo;
    }
    if(atual==NULL){
        printf("Valor não encontrado na lista");
    }
    if(anterior==NULL){
        *primeiro = atual->proximo;
    }
    else{
        anterior ->proximo = atual->proximo;
    }
    
    free(atual);
    
}