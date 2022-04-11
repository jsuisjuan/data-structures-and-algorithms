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
void inserirCrescente(noPonteiro *);
void retirar(noPonteiro *);
void consultarRetirar(noPonteiro *);
void decrescente(noPonteiro);
void listar(noPonteiro);

bool listaVazia(noPonteiro);

int main (){
    noPonteiro topo = NULL;
    int op;
    do {
        op = menu();
        switch(op){
            case 1: inserirCrescente(&topo); break;
            case 2: retirar(&topo); break;
            case 3: consultarRetirar(&topo); break;
            case 4: decrescente(topo); break;
            case 5: listar(topo); break;
        }
    } while (op != 0);
    return 0;
}

int menu(){
    int opcao;
    cout << "\n1.Inserir um elemento na lista"
         << "\n2.Retirar um elemento da lista"
         << "\n3.Retirar um especifico elemento da lista"
         << "\n4.Ordenar os elementos decrescentemente"
         << "\n5.Listar elementos da lista"
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

void inserirCrescente(noPonteiro *i){
    noPonteiro p = new no, aux, ant;

    cout << "\nDigite o valor do elemento: ";
    cin >> p->valor;

    p->ant = NULL;

    if(listaVazia(*i)){
        p->prox = *i;
        *i = p;
    }
    else {
        aux = *i;
        while (aux != NULL && p->valor > aux->valor){
			ant = aux;
			aux = aux->prox;
		}
		if (aux == *i){ //elemento é menor do que todos 
			(*i)->prox = aux;  // ou p->prox = topo ;
			*i = p;
		} else {
	 	/* elemento é maior do que todos ou está no meio
	      da lista  */
			(*i)->prox = aux;
			ant->prox = p;
		}
    }
    *i = p;
}

void retirar(noPonteiro *i){
    noPonteiro p = *i;
    if(!listaVazia(*i)){
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

void consultarRetirar(noPonteiro *i){
    noPonteiro aux ,p = *i;
    int item;
    bool achei = false;
    cout << "\nDigite o valor do elemento: ";
    cin >> item;

    if(!listaVazia(*i)){
        while (p != NULL && achei == false){
		    if (p->valor == item) {
			    cout << "Elemento encontrado no endereco: " << p << endl;
                if(p->ant == NULL && p->prox != NULL){
                    *i = p->prox;
                    (*i)->ant = NULL;
                    delete(p);
                }
                if(p->ant != NULL && p->prox != NULL){
                    aux = p->ant;
                    aux->prox = p->prox;
                    p->ant = p->prox;
                    delete(p);
                }
                if(p->ant != NULL && p->prox == NULL){
                    aux = p->ant;
                    aux->prox = NULL;
                    delete(p);
                }
                cout << "\nO elemento foi retirado da lista!\n";
                achei = true;
		    }else p = p->prox;
	    }
		if (!achei)	
			cout << "Elemento nao encontrado" << endl;
    }
    else cout << "\n\nLista esta Vazia!\n";
}

void decrescente(noPonteiro p){
    if(!listaVazia(p)){
        while(p != NULL)
            p = p->prox;
        cout << "\nElementos da lista: \n";
        cout << "INICIO";
        while(p != NULL){
            cout << "-->" << p->valor;
            p = p->ant;
        }
        cout << "--> NULL";
    } else cout << "\n\nLista esta Vazia!\n";
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