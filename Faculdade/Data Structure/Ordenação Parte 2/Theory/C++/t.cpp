#include <iostream>
using namespace std;
//tem coisas erradas nele na hora de fazer o chines!!!
struct no {
    int info;
    struct no *prox;
};
typedef struct no *noPtr;

int  menu();
int  inserir(noPtr*, noPtr*, int*);
void retirar(noPtr*, noPtr*, int*);
void consultar(noPtr*);
void listar(noPtr, int);
bool listaVazia(noPtr);

int main (){
    noPtr topo = NULL;
    noPtr fim = NULL;
    int op, qtde = 0;
    do {
        op = menu();
        switch (op)
        {
            case 1:
                qtde = inserir(&topo, &fim, &qtde);
                cout << "\nA lista possui " << qtde << " no(s)." << endl;
                break;
            case 2: retirar(&topo, &fim, &qtde); break;
            case 3: consultar(&topo); break;
            case 4: listar(topo, qtde); break;
        }
    } while(op != 0);
}

int menu(){
    int opcao;
    cout << "\n1.Inserir "
         << "\n2.Retirar "
         << "\n3.Consultar"
         << "\n4.Listar"
         << "\n0.Sair"
         << "\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

int inserir(noPtr *i, noPtr *f, int *q){
    noPtr aux, p = new no;
    aux = *f;
    cout << "\nDigite o valor do elemento: ";
    cin >> p->info;
    if (listaVazia(*i)){
        *i = p;        //topo == NULL
        p->prox = *i;
        *f = p;
    } else {
        p->prox = *i;  //topo != NULL
        *i = p;
        aux->prox = p;
    }
    *q = *q + 1;
    return *q;
}

void retirar(noPtr *i, noPtr *f, int *q){
    noPtr p = *i;
    noPtr aux = *f;
    noPtr ant = p;
    int item, cont = -1;
    bool achei = false;
    cout << "\nDigite o valor do elemento: ";
    cin >> item;
    if (!listaVazia(*i)){
        while (p != NULL && achei == false){
		    if (p->info == item) {
			    cout << "Elemento encontrado no endereco: musica " << *q << endl;
                if (*q == 1){
                    for(int j=cont;j>1;j--)
                        ant = ant->prox;
                    ant->prox = p->prox; 
                    delete(p);
                }
                if (*q != 1) {
                    if (p == *i){
                        *i = p->prox;
                        delete(p);
                    }
                    cout <<"GG";
                    //*i = p->prox;
                    for (int j=cont;j>1;j--)
                        ant = ant->prox;
                    ant->prox = p->prox;
                    delete(p);
                }
                cout << "\nO elemento foi retirado da lista!\n";
                achei = true;
		    } else {
                p = p->prox;
                //*q =*q-1;
                //cout << *q;
                cont++;
            }
	    }*q =*q-1;
		if (!achei)	
			cout << "Elemento nao encontrado" << endl;
    } else cout << "\n\nLista esta Vazia!\n";
}

void consultar(noPtr *i){
    noPtr p = *i;
    int item;
    bool achei = false;
    cout << "\nDigite o valore do elemento: ";
    cin >> item;
    if (!listaVazia(*i)){
        while (p != NULL && achei == false){
            if (p->info == item){
                cout << "\nElemento encontrado no endereco: " << p << endl;
                achei = true;
            } else p = p->prox;
        }
    } else cout << "\nLista Vazia!" << endl;
}

void listar(noPtr i, int q){
    if(!listaVazia(i)){
         cout << "\n";
         for(int j = 0; j < q; j++){
            cout << i->info << "\t";
            i = i->prox;
         }
         cout << "\n";
    } else cout << "\n\nLista Vazia!\n";
}

bool listaVazia(noPtr i){
   if (i)           //topo != NULL
      return false;
   else            //topo == NULL
      return true;
}

/*
 if (*q != 1) {
                    cout <<"GG";
                    //*i = p->prox;
                    for (int j=cont;j>1;j--)
                        ant = ant->prox;
                    ant->prox = p->prox;
                    delete(p);
                }
*/