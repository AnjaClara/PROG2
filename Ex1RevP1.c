/******************************************************************************

Revisão para a prova

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *lista;
    int n, i;
    
    printf("Digite o tamanho da lista: ");
    scanf("%d", &n);
    
    lista= (int*)malloc(n*sizeof(int));
    if(lista == NULL){
        printf("Erro na alocacao! \n");
        return 1;
    }
    
    for(i=0; i <n; i++){
        printf(" Digite o valor %d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Lista de numeros digitados: ");
    
    for(i=0; i<n ; i++){
        printf(" %d", lista[i]);
    }
    
    free(lista);
    
    return 0;
}
