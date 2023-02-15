/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int maior();

int main(){
    int n1, n2;
    printf("Temperatura em Celsius: ");
    scanf("%d", &n1);;

    n2 = celsius(n1, n2);

    printf("\nConvertido para Fahrenheit e: %d\n", n2);
    return 0;
}

int celsius(int a){
    return (a * 9/5) + 32;
}
