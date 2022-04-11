#include <iostream>
using namespace std;

int  menu();
void inserir(int);
void consultar(int);
void retirar(int);
void decrescente();
void listar();
bool listaVazia();

struct no {
    int valor;
    struct no *proximo;
};
typedef struct no *noPonteiro;
noPonteiro topo = NULL;

int main (){
    int operador, item;
    do {
        operador = menu();
        switch (operador){
            case 1:
                cout << "\nDigite um valor para ser adicionado: ";
                cin >> item;
                inserir(item);
                break;
            case 2:
                cout << "\nDigite o numero a ser procurado: ";
                cin >> item;
                consultar(item);
                break;
            case 3: listar(); break;
            case 4: 
                cout << "\nDigite um valor a ser retirado: ";
                cin >> item;
                retirar(item);
                break;
            //case 5: decrescente(); break;
        }
    } while (operador != 0);
    return 0;
}

int menu(){
    int opcao;
    cout <<"\n1: Inserir elemento na lista"
         <<"\n2: Consultar elemento da lista"
         <<"\n3: Listar elementos"
         <<"\n4: Retirar elemento da lista"
         <<"\n5: Decrescer elementos da lista"
         <<"\n0: Sair"
         <<"\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

void inserir(int valor){
    noPonteiro novo = new no, ant, aux;
    
    novo->valor = valor;
    if (listaVazia()){
        novo->proximo = topo;
        topo = novo;
    } else {
        aux = topo;
        while (aux != NULL && novo->valor > aux->valor){
            ant = aux;
            aux = aux->proximo;
        }
        if (aux == topo){
            novo->proximo = aux;
            topo = novo;
        } else {
            novo->proximo = aux;
            ant->proximo = novo;
        }
    }
}

void retirar(int valor){
    noPonteiro p = topo;
    
    bool achei = false;

    if (!listaVazia()){
        while (p != NULL && achei == false){
            if (p->valor == valor){
                topo = p->proximo;
                delete p;
                cout <<"O elemento " << valor << " foi retirado" << endl;
                achei = true;
            }
            p = p->proximo;
            
        }
        if(!achei)
            cout << "Elemento nao encontrado" << endl;
    } else cout << "Lista Vazia!" << endl;
}

void consultar(int valor){
    noPonteiro p = topo;
    bool achei = false;

    if (!listaVazia()){
        while (p != NULL && achei == false){
            if (p->valor == valor){
                cout << "Elemento encontrado no endereco: " << p << endl;
                achei = true;
            }
            p = p->proximo;
        }
        if(!achei)
            cout << "Elemento nao encontrado" << endl;
    } else cout << "Lista Vazia!" << endl;
}

void listar(){
     noPonteiro p = topo;
     if (listaVazia())
        cout << "\n\nA lista esta vazia!";
     else {
          cout << "\n\nElementos da Lista: \n";
          cout << "TOPO --> ";
          while (p != NULL){
                cout << p->valor << " --> ";
                p = p->proximo;
          }
          cout << "NULL\n\n";
     }
}
bool listaVazia(){
    if (topo)       //topo != NULL
       return false;
    else            //topo == NULL
        return true;
}