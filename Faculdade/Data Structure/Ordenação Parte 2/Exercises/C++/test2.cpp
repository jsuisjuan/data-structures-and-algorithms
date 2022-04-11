#include <iostream>
using namespace std;

struct no {
    int info;
    struct no *esq, *dir;
};
typedef struct no *noPtr;
int soma = 0;

int menu();
int listarNos();
void inserir(noPtr *, int);
void remover(noPtr *, int);
bool buscar(noPtr, int);
noPtr maior(noPtr *);
void listarEmOrdem(noPtr);
void listarPreOrdem(noPtr);
void listarPosOrdem(noPtr);
void somatorio(noPtr);
int  acharGrau(noPtr);
int somaNO_GRAU2_ArvBin(noPtr *);
void somatorioGrau(noPtr, int, int[]);
void imprimir(int[], int);
bool enderecoVazio(noPtr);

int main(){
    int op1, op2, x;
    bool achei;
    noPtr raiz = NULL;
    do {
        op1 = menu();
        switch(op1){
            case 1: cout << "\nElemento a inserir: ";
                    cin >> x;
                    inserir(&raiz, x);
                    break;
            case 2: cout << "\nElemento para remover: ";
                    cin >> x;
                    remover(&raiz, x);
                    break;
            case 3: op2 = listarNos();
                    if (op2 == 1) listarEmOrdem(raiz);
                    if (op2 == 2) listarPreOrdem(raiz);
                    if (op2 == 3) listarPosOrdem(raiz);
                    break;
            case 4: cout << "\nElemento para buscar: ";
                    cin >> x;
                    achei = buscar(raiz, x);
                    if (!achei)
                        cout << "Elemento nao encontrado";
            case 5: cout << "\nO somatorio elementos de grau 2 e: ";
                    somatorio(raiz); 
                    break;

        }
    } while(op1 != 0);
    return 0;
}

int menu(){
    int opcao;
    cout << "\n\n\n----Menu Principal----\n\n"
         << "\n1.Inserir no na arvore"
         << "\n2.Remover no na arvore"
         << "\n3.Listar todos os nos da arvore"
         << "\n4.Buscar no"
         << "\n5.Somar no"
         << "\n0.Sair"
         << "\nDigite um opcao: ";
    cin >> opcao;
    return opcao;
}

void inserir(noPtr *p, int x){
    if (enderecoVazio(*p)){
        *p = new no;
        (*p)->info = x;
        (*p)->esq = NULL;
        (*p)->dir = NULL;
    } else {
        if (x < ((*p)->info))
            inserir(&((*p)->esq), x);
        else
            inserir(&((*p)->dir), x);
    }
}

bool buscar(noPtr p, int x){
    bool achei = false;
    if (enderecoVazio(p))
        cout << "\nArvore nao possui elementos" << endl;
    else {
        if (x == (p->info)){
            cout << "\nO elemento: " << p->info << " foi encontrado!\n";
            achei = true;
        } else
            if (x < (p->info))
                buscar((p->esq), x);
            else
                buscar((p->dir), x);
    }
    return achei;
}

void listarEmOrdem(noPtr p){
    if (!enderecoVazio(p)){
        listarEmOrdem(p->esq);
        cout << "\t" << p->info;
        listarEmOrdem(p->dir);
    }
}

void listarPreOrdem(noPtr p){
    if (!enderecoVazio(p)){
        cout << "\t" << p->info;
        listarPreOrdem(p->esq);
        listarPreOrdem(p->dir);
    }
}

void listarPosOrdem(noPtr p){
    if (!enderecoVazio(p)){
        listarPosOrdem(p->esq);
        listarPosOrdem(p->dir);
    }
}

int somaNO_GRAU2_ArvBin(noPtr *raiz) {
if (raiz == NULL)
return 0;
if (*raiz == NULL)
return 0;



int soma_esq = somaNO_GRAU2_ArvBin(&((*raiz)->esq));
int soma_dir = somaNO_GRAU2_ArvBin(&((*raiz)->dir));



if (((*raiz)->dir != NULL)&&((*raiz)->esq != NULL)) {
return (soma_esq + soma_dir) + (*raiz)->info;
}



return (soma_esq + soma_dir);
}

void somatorio(noPtr p){ 
    int graus = somaNO_GRAU2_ArvBin(&p);
    cout << graus; 
}

void imprimir(int A[], int n){
    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
}

int acharGrau(noPtr p){
    if (p->esq == NULL && p->dir == NULL)
        return 0;
    int esq = 0;
    if (p->esq != NULL)
        esq = acharGrau(p->esq);
    int dir = 0;
    if (p->dir != NULL)
        dir = acharGrau(p->dir);
    return (max(esq, dir) + 1);
}

void somatorioGrau(noPtr p, int grau, int soma[]){
    if (p == NULL)
        return;
    if (grau == 2)
        soma[grau] += p->info;
    somatorioGrau(p->esq, grau+1, soma);
    somatorioGrau(p->dir, grau+1, soma);
}

void remover(noPtr *p, int x){
    noPtr aux;
    if (!enderecoVazio(*p)){
        if (x == ((*p)->info)){
            aux = *p;
            if (((*p)->esq) == NULL)
                *p = (*p)->dir;
            else    
                if (((*p)->dir) == NULL)
                    *p = (*p)->esq;
                else {
                    aux = maior(&((*p)->esq));
                    (*p)->info = aux->info;
                }
            delete(aux);
            cout << "\nO elemento foi removido\n";
        }
    } else //x != (*p)->info
        if ((x < ((*p)->info)))
            remover(&((*p)->esq), x);
        else
            remover(&((*p)->dir), x);
}

//verificar maior elemento da subárvore à esquerda.
noPtr maior(noPtr *p){
    noPtr t;
    t = *p;
    if ((t->dir) == NULL){
        *p = (*p)->esq;
        return(t);
    } else
        return (maior(&((*p)->dir)));
}

int listarNos(){
    int opcao;
    cout << "\n\nTipos de listagem:"
         << "\n1.Em Ordem"
         << "\n2.Pre Ordem"
         << "\n3.Pos Ordem"
         << "\n\nEscolha o tipo de listagem: ";
    cin >> opcao;
    return opcao;
}

bool enderecoVazio(noPtr p){
    if (p)
        return false;
    else
        return true;
}