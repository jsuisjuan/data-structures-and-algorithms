#include <iostream>
using namespace std;
//Tarefa: implementar uma Fila com complexidade de pior caso O(1) - tanto para inclusão quanto para remoção.
void enqueue();
void dequeue();
bool listaVazia();

struct no {
    int info;
    struct no *prox;
};
typedef struct no *noPtr;
noPtr topo = NULL;

int main(){
    int op;
    do {
        cin >> op;
        switch(op){
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        }
    } while(op != 0);
    return 0;
}

void enqueue(){
    noPtr aux, p = new no;

    cout << "\nDigite o valor do elemento: ";
    cin >> p->info;

    p->prox = NULL;
    if(listaVazia())
        topo = p;
    else {
        aux = topo;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = p;
    }
}

void dequeue(){
    noPtr p;

    if(listaVazia())
        cout << "\nFila Vazia!";
    else {
        p = topo;
        topo = p->prox;
        delete p;
        cout << "\nO elemento foi retirado da fila!\n";
    }
}

bool listaVazia(){
    if(topo)
        return false;
    else
        return true;
}