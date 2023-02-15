/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int soma();

int main(){
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("Valores depositados: ");
    printf("%d e" " %d", n1, n2);

    n3 = soma(n1, n2);

    printf("\nA soma dos valores e: %d\n", n3);
    return 0;
}

int soma(int a, int b){
    return a + b;
}
