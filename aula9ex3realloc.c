/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
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
    
    tamanho = 10;
    array=(int*)realloc(array, tamanho*sizeof(int)); //realocacao
    
    if (array == NULL){
        printf("Erro ao alocar a memoria \n");
        return 1;
    }
    
    for (int i = 0; i < tamanho; i++){
        array[i]= i +1;
        printf("%d \n", array[i]);
    }
    
    free(array);
    
    return 0;
}
