/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

void soma_valores(int a, int b, int *resultado){

    *resultado = a + b;
    
}

void soma_um(int a, int *resultadoUm){
    *resultadoUm = a + 1;
}

int main(void){
    
    int x = 2, y = 4, z = 8, w, h;
    
    printf("-----Utilizacao de ponteiros-----\n");
    printf("Numeros digitados: %d e %d\n", x, y);
    
    soma_valores(x, y, &w);
    
    printf("Resultado da soma de %d mais %d eh %d\n", x, y, w);
    
    soma_um(z, &h);
    
    printf("Resultado de %d mais um eh %d", z, h);
    
    return 0;
}






