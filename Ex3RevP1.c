/******************************************************************************

Revisão para a prova

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No*proximo;
}No;

void inserir(No**cabeca_ref, int novo_dado){
    No*novo_no = malloc(sizeof(No));
    novo_no->dado= novo_dado;
    //proximo no vair ser a cabeca
    novo_no->proximo=(*cabeca_ref);
    (*cabeca_ref)=novo_no;
}


int soma_lista(No*cabeca){
    int soma = 0;
    No*atual=cabeca;
    
    while(atual!=NULL){
        soma+=atual->dado; //adiciona o valor do no 
        atual=atual->proximo;
    }
    
    return soma;
}



int main(){
    No*cabeca =NULL;
    
    inserir(&cabeca,1);
    inserir(&cabeca,2);
    inserir(&cabeca,3);
    inserir(&cabeca,4);
    
    int soma = soma_lista(cabeca);
    
    printf("O valor da soma eh: %d\n", soma);
    
    return 0;
    
    
}
