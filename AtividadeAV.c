/******************************************************************************

Atividade avaliativa

*******************************************************************************/

#include <stdio.h>

#define MAX_SIZE 4

int queue[MAX_SIZE];
int rear = 0;
int inicio = 0;
int quantidade = 0;

void inicializarFila (int tamanho){
    rear = 0;
    inicio = 0;
    quantidade = 0;
    
    if (tamanho > MAX_SIZE){
        printf("Tamanho maximo atingido!");
        tamanho = MAX_SIZE;
    }
    
}

int estaVazia (){
    return quantidade == 0;
}

int estaCheia(){
    return quantidade == MAX_SIZE;
}

void push(int paciente){
    
    if (estaCheia()){
        printf("Fila cheia\n");
        return;
    }
    queue[rear]=paciente;
    rear = (rear + 1) % MAX_SIZE;
    quantidade++;
    
}


int pop(){
    int paciente;
    
    if (estaVazia()){
        printf("Fila vazia!\n");
        return -1;
    }
    queue[rear]=paciente;
    rear = (rear + 1) % MAX_SIZE;
    quantidade--;
    return queue[rear];
}

int front(){
    
    estaVazia();
    
    printf("O proximo paciente a ser atendido eh: \n");
    
    printf("%d ", queue[0]);
    
    printf("\n");
}

int main (){
 inicializarFila(4);
 int opcao, paciente;
 do{
        printf("\nDigite 1 para adicionar um paciente, 2 para remover o proximo paciente, 3 para mostrar o proximo paciente, 0 para sair: ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
            printf("Digite o novo paciente: ");
            scanf("%d",&paciente);
            push(paciente);
            break;
            case 2:
                pop();
                break;
            case 3:
                front();
                break;
            case 0:
                printf("Saindo....");
                break;
            default :
                printf("Opcao invalida");

        }

 }while(opcao != 0);
 
 return 0;
 
}