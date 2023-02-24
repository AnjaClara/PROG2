/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    FILE *numeros;
    numeros = fopen("numeros.txt", "w");
    if (numeros == NULL){
    }
    
    printf("Escreva o que deja colocar no arquivo: \n");
    scanf("%d", &a);

    fprintf(numeros,"%d", a);
    
    printf("%d",a);
    
    fclose(numeros);

    return 0;
}






