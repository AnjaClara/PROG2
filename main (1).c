/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int maior();

int main(){
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("Valores depositados: ");
    printf("%d e" " %d", n1, n2);

    n3 = maior(n1, n2);

    printf("\nO maior numero e: %d\n", n3);
    return 0;
}

int maior(int a, int b){
    if (a > b){
        return a;
    }else {
        return b;
    }
}
