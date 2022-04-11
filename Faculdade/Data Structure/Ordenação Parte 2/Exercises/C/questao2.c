#include <stdio.h>
#define MAXSIZE 10

void push();
void pop();
void listar();

struct conteiner {
    int conteiners[MAXSIZE];
    int topo; 
}patio;

int main(){
    int escolha;
    patio.topo = -1;

    do {
        printf("\n\t\tXYZ Logistica\n\n");
        printf("0. Sair\n1. Adicionar Conteiner\n2. Retirar Conteiner\n3. Listar Conteiners\n");
        scanf("%d" ,&escolha);

        switch(escolha){
            case 0:
                printf("Obrigado!\n");
                return 0;
            case 1:
                printf("\tAdicionar Conteiner\n\n");
                push();
                break;
            case 2:
                printf("\tRetirar Conteiner\n\n");
                pop();
                break;
            case 3:
                printf("\tListar Conteiners\n\n");
                listar();
                break;
        }
    }
    while(escolha != 0);
    return 0;
}

void push(){
    int codigo;
    if(patio.topo == MAXSIZE-1)
        printf("Limite maximo permitido.\n");
    else {
        printf("Insira um codigo para o conteiner: ");
        scanf("%d" ,&codigo);
        patio.topo++;
        patio.conteiners[patio.topo] = codigo;
    }
}

void pop(){
    int codigo;
    if(patio.topo == -1)
        printf("O Patio esta vazio.\n");
    else {
        codigo = patio.conteiners[patio.topo];
        patio.topo--;
        printf("Conteiner retirado. Codigo: %d\n", codigo);
    }
}

void listar(){
    if(patio.topo == -1)
        printf("O Patio esta vazio.\n");
    else {
        printf("Lista de conteiners de cima para baixo. Codigos: ");
        for(int i = patio.topo; i >= 0; i--)
            printf("%d\t", patio.conteiners[i]);
        printf("\n");
    }
}
