/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};
    
    FILE* arquivo = fopen("numeros.bin", "wb");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }
    
    fwrite(numeros, sizeof(int), 5, arquivo);
    
    fclose(arquivo);
    
    return 0;
}






