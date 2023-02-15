/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
    float n1, n2;
    printf("Temperatura em Celsius: ");
    scanf("%f", &n1);

    n2 = (n1 * 1.8) + 32;

    printf("\nConvertido para Fahrenheit e: %.1fC\n", n2);
    return 0;
}




