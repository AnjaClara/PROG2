/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

void soma_valores(int a, int b, int *resultado){

    *resultado = a + b;
    
}

int main(void){
    
    int a, b, c;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);
    
    
    printf("-----Utilizacao de ponteiros-----\n");
    printf("Numeros digitados: %d e %d\n", a, b);
    
    soma_valores(a, b, &c);
    
    printf("Resultado da soma: %d\n", c);
    
    return 0;
}






