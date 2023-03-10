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
    int n, i, *array, sum=0;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    
    array= (int*)calloc(n,sizeof(int));
    
    if (array == NULL){
        printf("Erro ao alocar a memoria \n");
        return 1;
    }
    for(i = 0; i < n; i++){
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%d", &array[i]);
        sum+=array[i];
        
    }
    
    printf("Valor final da soma: %d \n", sum);
    
    
    free(array);
    return 0;
}
