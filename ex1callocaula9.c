/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 10;
    int *array= (int*)calloc(tamanho,sizeof(int));
    
    if (array == NULL){
        printf("Erro ao alocar a memoria \n");
        return 1;
    }
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", array[i]);
        
    }
    
    free(array);
    return 0;
}
