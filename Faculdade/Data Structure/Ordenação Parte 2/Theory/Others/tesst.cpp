#include <iostream>
using namespace std;

struct no {
    int info;
    struct no *prox;
};
typedef struct no *noPtr;

int  menu();
int  inserir(noPtr*, noPtr*, int*);
void retirar(noPtr*, noPtr*, int*);
void consultar(noPtr*, int*);
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
                cout << "\nVoce possui " << qtde << " musicas." << endl;
                break;
            case 2: consultar(&topo, &qtde); break;
            case 3: retirar(&topo, &fim, &qtde); break;
            case 4: listar(topo, qtde); break;
        }
    } while(op != 0);
}

int menu(){
    int opcao;
    cout <<"\n\n\tMinha Playlist 2021\n";
    cout << "\n1.Incluir nova musica "
         << "\n2.Procurar musica "
         << "\n3.Remover musica"
         << "\n4.Listar musica"
         << "\n0.Sair"
         << "\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

int inserir(noPtr *i, noPtr *f, int *q){
    noPtr aux, p = new no;
    aux = *f;
    cout << "\nDigite o codigo da musica: ";
    cin >> p->info;
    if (listaVazia(*i)){
        *i = p;        
        p->prox = *i;
        *f = p;
    } else {
        p->prox = *i;  
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
    cout << "\nDigite o codigo da musica: ";
    cin >> item;
    if (!listaVazia(*i)){
        while (p != NULL && achei == false){
		    if (p->info == item) {
			    cout << "Codigo encontrado! Musica: " << *q << endl;
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
                    for (int j=cont;j>1;j--)
                        ant = ant->prox;
                    ant->prox = p->prox;
                    delete(p);
                }
                cout << "\nA musica foi removida da playlist!\n";
                achei = true;
		    } else {
                p = p->prox;
                cont++;
            }
	    }*q =*q-1;
		if (!achei)	
			cout << "Codigo invalido" << endl;
    } else cout << "\n\nPlaylist Vazia!\n";
}

void consultar(noPtr *i, int *q){
    noPtr p = *i;
    int item;
    bool achei = false;
    cout << "\nDigite o codigo da musica: ";
    cin >> item;
    if (!listaVazia(*i)){
        while (p != NULL && achei == false){
            if (p->info == item){
                cout << "\nMusica encontrada! Codigo: " << item << " Musica: " << *q << endl;
                achei = true;
            } else p = p->prox;
        }
    } else cout << "\nPlaylist Vazia!" << endl;
}

void listar(noPtr i, int q){
    if(!listaVazia(i)){
         cout << "\n";
         for(int j = 0; j < q; j++){
            cout << i->info << "\t";
            i = i->prox;
         }
         cout << "\n";
    } else cout << "\n\nPlaylist Vazia!\n";
}

bool listaVazia(noPtr i){
   if (i)           
      return false;
   else            
      return true;
}
