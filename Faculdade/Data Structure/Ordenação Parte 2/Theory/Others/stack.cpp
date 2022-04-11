#include <iostream>
using namespace std;

/*
  Este programa é uma represantação completa de como uma pilha funciona.
  O limite dela é de 3 empilhamentos. Era para eu ter feito isso na prova.
*/

void push();
void pop();
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
    int operador;

    cout <<'\t'<< "Pilha\n" << endl;
    cout <<"1.Push\n"<<"2.Pop\n"<<"3.Listar\n"<<"0.Sair"<< endl;
    do {
        cin >> operador;
        switch(operador){
            case 1: push();break;
            case 2: pop();break;
            case 3: listar();break;
        }
    }while(operador!=0);
    return 0;
}

void push(){
    if(contador == 3)
        cout << "\nPilha cheia!" << endl;
    else {
        noPonteiro p;
        int valor;

        p = new no;
        cout << "Digite o valor do elemento: ";
        cin >> valor;

        p->valor = valor;
        p->proximo = topo;
        topo = p;
        contador++;
    }
}

void pop(){
    noPonteiro p = topo;
    if(!listaVazia()){
        topo = topo->proximo;
        delete(p);
        contador--;
        cout <<"\nO elemento foi retirado da pilha." << endl;
    } else cout << "\nPilha vazia!" << endl;
}

void listar(){
    noPonteiro p = topo;
    if(listaVazia())
        cout << "\nPilha Vazia!" << endl;
    else {
        cout <<"\nElementos da Pilha:\n";
        cout << "TOPO --> ";
        while(p != NULL){
            cout << p->valor << " --> ";
            p = p->proximo;
        }
        cout << "NULL\n";
    }
}

bool listaVazia(){
    if(topo == NULL)
        return true;
    else
        return false;
}