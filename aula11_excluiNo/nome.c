#include "ana.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    No* primeiro = criarNo(10);
    No* segundo = criarNo(20);
    No* terceiro = criarNo(30);
    
    primeiro ->proximo= segundo;
    segundo ->proximo= terceiro;
    
    printf("Antes da exclusão: \n");
    No* atual = primeiro;
    while(atual != NULL){
        printf("Valor do no %d \n", atual->valor);
        atual = atual->proximo;
    }
    excluirNo(&primeiro, 20);
    printf("Depois da exclusao: \n");
    atual = primeiro;
    
    while(atual !=NULL){
        printf("Valor do no %d \n", atual->valor);
        atual = atual->proximo;
    }
    free(primeiro);
    free(terceiro);
    
    return 0;
}