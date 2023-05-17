/******************************************************************************

 Implemente o algoritmo Selection Sorting.

*******************************************************************************/
#include <stdio.h>

void selectionSorting(int arr[], int n){
    int min_id, i, j;
    
    for(i=0; i < n-1; i++){
        min_id=i;
        
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_id]){
                min_id=j;
            }
        }
        
        int aux = arr[min_id];
        arr[min_id] = arr[i];
        arr[i] =  aux;
    }
    
}

int main()
{
    int arr[] = {29, 30, 25, 01, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array Original: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    selectionSorting(arr, n);
    
    printf("Array Ordenado: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
