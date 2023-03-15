/******************************************************************************

AULA 10 - EX.2 - Adicione dois elementos a uma lista encadeada.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct No {
        int valor;
        struct No*proximo;
    };

int main()
{
    struct No*primeiro = (struct No*) malloc (sizeof(struct No));
    struct No*segundo = (struct No*) malloc (sizeof(struct No));
    struct No*terceiro = (struct No*) malloc (sizeof(struct No));
    
    //ponteiro para struct
    primeiro -> valor = 10;
    segundo -> valor = 20;
    terceiro -> valor = 30;
    
    primeiro -> proximo = segundo;
    segundo -> proximo = terceiro;
    terceiro -> proximo = NULL;
    
    //percorrer uma lista encadeada começando pela cabeça
    struct No*atual = primeiro;
    while(atual != NULL){
        printf("Valor do no %d \n", atual->valor);
        atual = atual -> proximo;
    }
    
    free(primeiro);
    free(segundo);
    free(terceiro);

    return 0;
}
