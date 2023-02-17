/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *trocou, int *trocou2){

    int troca;
    troca = *trocou;
    *trocou = *trocou2;
    *trocou2 = troca;
}

int main(void){
    
    int valor = 25;
    int valorA = 5;
    
    
    printf("-----Utilizacao de ponteiros-----\n");
    printf("Ordem anterior: %d e %d\n", valor, valorA);
    
    troca_valores(&valor, &valorA);
    
    printf("Ordem apos a troca: %d e %d\n", valor, valorA);
    
    getch();
    return 0;
}





