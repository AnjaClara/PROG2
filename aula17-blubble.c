/******************************************************************************

o que o programa faz: ordena em ordem crescente
*******************************************************************************/
#include <stdio.h>

int main()
{
    int array [] = {4, 3, 0, 7, 1, 10}; //declarar array
    int tamanho = sizeof(array)/sizeof(array[0]); //determinar o tamanho do array

    for (int i = 0; i < tamanho -1; i++){
        for(int j = 0; j < tamanho -1; j++){
            if(array[j]> array[j+1]){
                int temp= array[j];
                array[j]= array[j+1];
                array[j+1]= temp; 
            } //comparar o atual com o próximo(se for maior que o outro, troca de lugar)
        } //loop interno
    } //loop externo
    
    for(int i= 0; i< tamanho; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
