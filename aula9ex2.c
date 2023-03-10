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
    //se continuar trocando o numero ele continuara impriminto a palavra inteira
    
    char*string = (char*)calloc(5,sizeof(char));
    
    if (string == NULL){
        printf("Erro ao alocar a memoria \n");
        return 1;
    }
    
    strcpy(string, "Hello");
    printf("%s \n", string);
    
    free(string);
    
    return 0;
}
