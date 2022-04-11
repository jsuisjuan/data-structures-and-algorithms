#include <iostream>
using namespace std;

struct no {
    int valor;
    struct no *ant;
    struct no *prox;
};
typedef struct no *noPonteiro;
noPonteiro topo = NULL;

int  menu();
void inserir(int);
void retirar(int);
void listar();
bool listaVazia();

int main (){
    int op, item;
    do {
        op = menu();
        switch(op){
            case 1: 
            cout << "\nDigite um valor a ser adicionado: ";
            cin >> item;
            inserir(item);
            break;
            case 2: retirar(); break;
            case 3: listar(); break;
        }
    } while (op != 0);
    return 0;
}

int menu(){
    int opcao;
    cout << "\n1.Inserir elemento na lista"
         << "\n2.Retirar elemento da lista"
         << "\n3.Listar elementos da lista"
         << "\n0.Sair"
         << "\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

void inserir(){
    noPonteiro p = new no;

    cout << "\nDigite o valor do elemento: ";
    cin >> p->valor;

    p->ant = NULL;

    if(listaVazia())
        p->prox = NULL;
    else {
        p->prox = *i;
        (*i)->ant = p;
    }
    *i = p;
}

void retirar(){
    noPonteiro p = *i;
    if(!listaVazia()){
        if(p->prox == NULL)
            *i = NULL;
        else {
            *i = p->prox;
            (*i)->ant = NULL;
        }
        delete(p);
        cout << "\nO elemento foi retirado da lista!\n";
    }
    else cout << "\n\nLista esta Vazia!\n";
}

void listar(){
    if(!listaVazia()){
        cout << "\nElementos da lista: \n";
        cout << "INICIO";
        while(p != NULL){
            cout << "-->" << p->valor;
            p = p->prox;
        }
        cout << "--> NULL";
    } else cout << "\n\nLista esta Vazia!\n";

}

bool listaVazia(){
    if (topo)       //topo != NULL
       return false;
    else            //topo == NULL
        return true;
}