/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_alea, tent=0, qtd_num=100000;
    
    int i;
    
    srand(time(NULL));
  
    FILE *aleatorios;
    
    aleatorios = fopen("aleatorios.txt", "w");
    
    for (i=0; i <= 10; i++){
        num_alea=rand()%qtd_num;
        printf("%d\n", num_alea);
        fprintf(aleatorios,"%d\n", num_alea);
    }
    
    fclose(aleatorios);

    return 0;
}






