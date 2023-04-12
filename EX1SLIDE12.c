/******************************************************************************

EX1SLIDE12 - faça um programa que utiliza pilhas para imprimr uma sequência de
números de forma invertida

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100

typedef struct{ //armaznar dados da pilha
    int data[MAX_SIZE];
    int topo;
}Pilha;

void iniciarPilha(Pilha *pilha){ //iniciar a pilha
    pilha -> topo = -1;
}

int pilhaVazia (Pilha *pilha){ // verificar se apilha esta vazia
    return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha){ // verificar se a pilha esta cheia
    return pilha->topo == MAX_SIZE-1;
}

void push(Pilha *pilha, int valor){ //coloca topo da pilha
    
    if(pilhaCheia(pilha)){
        printf("Pilha esta cheia\n");
        exit(1);
    }
    
    pilha ->topo++;
    pilha->data[pilha->topo]= valor;
    
}

int pop(Pilha *pilha){ //remove topo da pilha 

    if(pilhaVazia(pilha)){
        printf("A pilha esta vazia\n");
        exit(1);
    }
    
    int valor = pilha->data[pilha->topo];
    pilha->topo--;
    return valor;
}

int main(){
    Pilha pilha;
    iniciarPilha(&pilha);
    
    int num, i;
    
    printf("Digite uma sequencia de numeros\n");
    
    do{
        scanf("%d", &num);
        if(num !=0){
            push(&pilha, num);
        }
    } while (num !=0);
       
    printf("Sequendia invertida: \n");
    
    
    while(!pilhaVazia(&pilha)){
        printf("%d", pop(&pilha));
    }
    
    return 0;
}
