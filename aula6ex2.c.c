/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE* arquivo = fopen("numeros.bin", "rb");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }
    
    int numeros[5];
    fread(numeros, sizeof(int), 5, arquivo);
    for (int i = 0; i < 5; i++){
        printf("%d\n", numeros[i]);
    }
    
    fclose(arquivo);
    
    return 0;
}






