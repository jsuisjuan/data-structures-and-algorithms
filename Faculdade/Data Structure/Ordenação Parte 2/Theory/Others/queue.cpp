#include <iostream>
using namespace std;

void enqueue();
void dequeue();
void listar();
bool listaVazia();

struct no {
    int valor;
    struct no *proximo;
};
typedef struct no *noPonteiro;
noPonteiro topo = NULL;
int contador = 0;

int main(){
    int operando;
    cout <<'\t'<< "Fila\n" << endl;
    cout <<"1.Enqueue\n"<<"2.Dequeue\n"<<"3.Listar\n"<<"0.Sair"<< endl;
    do {
        cin >> operando;
        switch(operando){
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: listar(); break;
        }
    } while(operando != 0);
    return 0;
}

void enqueue(){
    noPonteiro aux, p = new no;
    if(contador == 3)
        cout << "\nFila Cheia!" << endl;
    else {
        cout << "\nDigite o valor do elemento: ";
        cin >> p->valor;

        p->proximo = NULL;
        if(listaVazia())
            topo = p;
        else {
            aux = topo;
            while(aux->proximo != NULL)
                aux = aux->proximo;
            aux->proximo = p;
        }
        contador++;
    }
}

void dequeue(){
    noPonteiro p;
    if(listaVazia())
        cout << "\nFila Vazia!";
    else {
        p = topo;
        topo = p->proximo;
        delete p;
        contador--;
        cout << "\nO elemento foi retirado da fila!\n";
    }
}

void listar(){
    noPonteiro p = topo;
    if(listaVazia())
        cout << "\nFila Vazia!";
    else {
        cout <<"\nElementos da Fila:\n";
        cout << "TOPO --> ";
        while(p != NULL){
            cout << p->valor << " --> ";
            p = p->proximo;
        }
        cout << "NULL\n";
    }
}

bool listaVazia(){
    if(topo)         //topo != NULL
        return false;
    else             //topo == NULL
        return true;
}