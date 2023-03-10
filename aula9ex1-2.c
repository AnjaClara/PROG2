#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tamanho2;
    int tamanho = 5;
    int *array = (int*)malloc(tamanho*sizeof(int)); //alocacao
    
    if (array == NULL){
        printf("Erro ao alocar a memoria \n");
        return 1;
    }
    
    for (int i = 0; i < tamanho; i++){
        array[i]= i +1;
        printf("%d \n", array[i]);
    }
    
    printf("\n");
    
    printf("Digite um novo numero: ");
    scanf("%d", &tamanho2);
    
    array=(int*)realloc(array, tamanho2*sizeof(int)); //realocacao
    
    if (array == NULL){
        printf("Erro ao alocar a memoria \n"); 
        return 1;
    }
    
    for (int i = 0; i < tamanho2; i++){
        array[i]= i +1;
        printf("%d \n", array[i]);
    }
    
    free(array);
    
    return 0;
}
