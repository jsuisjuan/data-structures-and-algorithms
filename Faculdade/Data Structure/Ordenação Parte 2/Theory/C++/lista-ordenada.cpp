#include <iostream>
using namespace std;

int menu();
void inserir(int);
void consultar(int);
void retirar();
void retirarConsulta(int);
bool listaVazia();
void listar();
void decrescente();

struct no {
	int info; 
	struct no *prox;
};
typedef struct no * noPtr;
noPtr topo = NULL;

int main(){
    int op, item;	  
	do {
    	op = menu();
       	switch (op){
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
		 	case 3: retirar(); break;
			case 4:
				cout << "\nDigite o numero a ser retirado: ";
				cin >> item; 
				retirarConsulta(item);
				break;
			case 5: listar(); break;
         }
	} while (op != 0);
	return 0;
}

int menu() {
    int opcao;
	cout <<"\n\tLista Ordenada\n";
	cout <<"\n1: Inserir elemento da lista" 
	 	 <<"\n2: Consultar elemento da lista"			
	 	 <<"\n3: Retirar elementos da lista"
		 <<"\n4: Consultar e retirar elementos da lista"
		 <<"\n5: Listar elementos da lista"
		 <<"\n0: Sair"
	  	 <<"\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}

void inserir(int valor) {
    noPtr novo = new no, ant, aux;
    novo->info = valor;
    if (listaVazia()){  //lista sem elementos 
		novo->prox = topo;
		topo = novo;
	} else { 	//verificar posição para inserção 	
		aux = topo;
		while (aux != NULL && novo->info > aux->info){
			ant = aux;
			aux = aux->prox;
		}
		if (aux == topo){ //elemento é menor do que todos 
			novo->prox = aux;  // ou p->prox = topo ;
			topo = novo;
		} else {
	 	/* elemento é maior do que todos ou está no meio
	      da lista  */
			novo->prox = aux;
			ant->prox = novo;
		}
     }
}

void consultar(int x){
    noPtr p = topo; 
	bool achei = false;  
	if (!listaVazia()){ 
		while (p != NULL && achei == false){
		    if (p->info == x){
			  	cout << "Elemento encontrado no endereco: " << p << endl;
		       	achei = true;
		    } p = p->prox;
	      }
		if (!achei)	
			cout << "Elemento nao encontrado" << endl;
	} else cout << "Lista Vazia!" << endl;
}

bool listaVazia(){
    if (topo)
       return false;
    else
        return true;
}

void listar(){
    noPtr p = topo;
    if (listaVazia())
        cout << "\n\nA lista esta vazia!";
    else {
        cout << "\n\nElementos da Lista: \n";
        cout << "TOPO --> ";
        while (p != NULL){
            cout << p->info << " --> ";
            p = p->prox;
        }
        cout << "NULL\n\n";
    }
}

void retirar (){
	noPtr p = topo;
	 if(!listaVazia()){
        if(p->prox == NULL)
            topo = NULL;
        else 
            topo = p->prox;
        delete(p);
        cout << "\nO elemento foi retirado da lista!\n";
    }
    else cout << "\n\nLista esta Vazia!\n";
}
//tenho q fazer alterações, para excluir caso o elemento esteja no inicio, meio e fim.
void retirarConsulta(int x){
	noPtr p = topo;
	bool achei = false;
	if (!listaVazia()){ 
		while (p != NULL && achei == false){
		    if (p->info == x){
			  	cout << "Elemento encontrado no endereco: " << p << endl;
				if(p->prox == NULL)
            		topo = NULL;
       	 		else 
            		topo = p->prox;
        		delete(p);
        		cout << "\nO elemento foi retirado da lista!\n";
		       	achei = true;
		    } p = p->prox;
	      }
		if (!achei)	
			cout << "Elemento nao encontrado" << endl;
	} else cout << "Lista Vazia!" << endl;
}