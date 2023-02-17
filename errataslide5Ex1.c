/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include <stdio.h>
#include <stdlib.h>

void imprime (int *m, int n){
    int i;
    for (i=0; i<n; i++)
        printf("O item do array eh: %d\n", m[i]);
}

int main(void){
    
    int x[5] = {1,2,3,4,5};
    
    imprime(x, 5);
    
    return 0;
}






