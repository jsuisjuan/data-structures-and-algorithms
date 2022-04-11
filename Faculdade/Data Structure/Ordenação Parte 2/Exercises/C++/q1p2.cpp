#include <iostream>
using namespace std;

struct no {
    int valor;
    struct no *ant;
    struct no *prox;
};
typedef struct no *noPonteiro;

int  menu();
void inserir(noPonteiro *);
void somatorio(noPonteiro);
void listar(noPonteiro);
bool listaVazia(noPonteiro);

int main(){
    noPonteiro topo = NULL;
    int op;
    do {
        op = menu();
        switch(op){
            case 1: inserir(&topo); break;
            case 2: listar(topo); break;
        }
    } while (op != 0);
    return 0;
}

int menu(){
    int opcao;
    cout << "\n1.Inserir um elemento na lista"
         << "\n2.Listar elementos da lista"
         << "\n0.Sair"
         << "\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

void inserir(noPonteiro *i){
    noPonteiro p = new no, aux;

    cout << "\nDigite o valor do elemento: ";
    cin >> p->valor;

    p->ant = NULL;

    if(listaVazia(*i))
        p->prox = NULL;
    else {
        p->prox = *i;
        (*i)->ant = p;
    }
    *i = p;
}

void somatorio(noPonteiro p){
    temp = F;
    int x = p->valor;
    while (p->prox != NULL){
        x += p->valor;
        cout << p->valor; 
        temp = p->ant; 
    }
    cout << x;
}
void listar(noPonteiro p){
    if(!listaVazia(p)){
        cout << "\nElementos da lista: \n";
        cout << "INICIO";
        while(p != NULL){
            cout << "-->" << p->valor;
            p = p->prox;
        }
        cout << "--> NULL";
    } else cout << "\n\nLista esta Vazia!\n";
}

bool listaVazia(noPonteiro i){
    if (i)           //topo != NULL
       return false;
    else            //topo == NULL
        return true;
}