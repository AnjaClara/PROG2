/******************************************************************************

Implemente o algoritmo de ordenação por inserção

*******************************************************************************/
#include <stdio.h>

void insertionSort(int arr[], int n){
    int i, j;
    
    for(i=1; i<n; i++){
        int temp = arr[i];
        j = i-1;
    
        while(j>=0 && arr[j]> temp){
            arr[j+1] = arr[j];
            j--;
        }
    
        arr[j+1] = temp;
    }
    
}

int main(){
    int arr[] = {5, 2, 3, 8, 10, 15, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array original: ");
    for (int i=0; i <n; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    insertionSort(arr, n);
    
    printf("Array ordenado: ");
    
    for (int i=0; i <n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
