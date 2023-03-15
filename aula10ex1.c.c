/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//struct = registros que definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado
struct No {
        int valor;
        struct No*proximo;
    };

int main()
{
    struct No*primeiro = (struct No*) malloc (sizeof(struct No));
    struct No*segundo = (struct No*) malloc (sizeof(struct No));
    //ponteiro para struct
    primeiro -> valor = 10;
    segundo -> valor = 20;
    
    primeiro -> proximo = segundo;
    segundo -> proximo = NULL;
    
    printf("Valor do primeiro no: %d \n", primeiro->valor); //cabeça
    printf("Valor do segundo no: %d \n", segundo->valor); //cauda
    
    free(primeiro);
    free(segundo);

    return 0;
}
