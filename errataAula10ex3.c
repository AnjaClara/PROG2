/******************************************************************************

AULA 10 - EX.3 - Exclua um elemento de uma lista encadeada.
dica para estudo: https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html
https://wagnergaspar.com/como-remover-um-no-da-estrutura-lista-simplesmente-encadeada/

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No*proximo;
} No;

No *adicionaNo(No *lista, int valor){
    No *novoNo = (No*) malloc (sizeof(No));
    novoNo -> valor = valor;
    novoNo -> proximo = NULL;
    
    //verificar se lista esta vazia
    
    if(lista ==NULL){
        lista = novoNo;
    }
    else {
        No*ultimo = lista;
        
        while(ultimo->proximo != NULL){
            ultimo= ultimo->proximo;
        }
        
        ultimo->proximo= novoNo;
    }
    return lista;
}

No *exluirNo(No *lista, int valor){
    No* atual= lista;
    No* anterior = NULL;
    
    while(atual !=NULL && atual -> valor != valor){
        anterior= atual;
        atual = atual->proximo;
    }
    if(atual==NULL){
        return lista;
    }
    if(anterior == NULL){
        lista = atual -> proximo;
    }
    else {
        anterior->proximo=atual->proximo;
    }
    free(atual);
    return lista;
}

int main(){
    No* lista = NULL;
    lista= adicionaNo(lista,10);
    lista= adicionaNo(lista,20);
    lista= adicionaNo(lista,30);
    
    printf("Lista antes da exclusão: \n");
    
    No *atual= lista;
    while(atual !=NULL){
        printf("Valor do no: %d \n", atual->valor);
        atual = atual -> proximo;
    }
    
    lista = exluirNo(lista,20);
    printf("Lista depois da exclusão: \n");
    atual= lista;
    
    while(atual != NULL){
        printf("Valor do no: %d \n", atual->valor);
        atual=atual->proximo;
    }
    
    while(lista !=NULL){
        No *proximo = lista ->proximo;
        free(lista);
        lista=proximo;
    }
    
    return 0;
}



