/******************************************************************************

Revisão para a prova

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char texto[100];
    
    FILE *string;
    
    string = fopen("string.txt", "w");
    
    if (string == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }
    
    printf("Digite o numero de strings: \n");
    scanf("%d", &a);
    
    for (int i=0; i<a ; i++){
        printf("Digite a string %d: ", i+1);
        scanf(" %s", texto);
        fprintf(string, "%s\n", texto);
    }
    
    fclose(string);
    
    printf("Strings salvas com sucesso!");
   
    return 0;
}
