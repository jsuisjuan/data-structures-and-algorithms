#include <iostream>
using namespace std;

struct arvore {
    int num, altd, alte;
    struct arvore *dir, *esq;
};

arvore* rotacao_esquerda(arvore* aux){
    arvore *aux1, *aux2;
    aux1 = aux->dir;
    aux2 = aux->esq;
    aux->dir = aux2;
    aux1->esq = aux;
    if (aux->dir == NULL)
        aux->altd = 0;
    else if (aux->dir->alte > aux->dir->altd)
        aux->altd = aux->dir->alte+1;
    else
        aux->altd = aux->dir->altd+1;
    return aux1;
}

arvore* rotacao_direita(arvore* aux){
    arvore *aux1, *aux2;
    aux1 = aux->esq;
    aux2 = aux1->dir;
    aux->esq = aux2;
    aux1->dir = aux;
    if (aux->esq == NULL)
        aux->alte = 0;
    else if (aux->esq->alte > aux->esq->altd)
        aux->alte = aux->esq->alte+1;
    else
        aux->alte = aux->esq->alte+1;
    if (aux1->dir->alte > aux1->dir->altd)
        aux1->altd = aux1->dir->alte+1;
    else  
        aux1->altd = aux1->dir->altd+1;
    return aux1;
}

arvore* balanceamento(arvore *aux){
    int d, df;
    d = aux->altd - aux->alte;
    if (d == 2){
        df = aux->dir->altd - aux->dir->alte;
        if (df >= 0)
            aux = rotacao_esquerda(aux);
        else {
            aux->dir = rotacao_direita(aux->dir);
            aux = rotacao_esquerda(aux);
        }
    } else if (d == -2){
        df = aux->esq->altd - aux->esq->alte;
        if (df <= 0)
            aux = rotacao_direita(aux);
        else {
            aux->esq = rotacao_esquerda(aux->esq);
            aux = rotacao_direita(aux);
        }
    }
    return aux;
}

arvore* inserir(arvore *aux, int num){
    // o objeto novo é um objeto auxiliar
    arvore *novo;
    if (aux == NULL){
        novo = new arvore();
        novo->num = num;
        novo->altd = 0;
        novo->alte = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        aux = novo;
    } else if (num < aux->num) {
        aux->esq = inserir(aux->esq, num);
        if (aux->esq->altd > aux->esq->alte)
            aux->alte = aux->esq->altd+1;
        else    
            aux->alte = aux->esq->alte+1;
        aux = balanceamento(aux);
    } else {
        aux->dir = inserir(aux->dir, num);
        if (aux->dir->altd > aux->dir->alte)
            aux->altd = aux->dir->altd+1;
        else
            aux->altd = aux->dir->alte+1;
        aux = balanceamento(aux);
    }
    return aux;
}

int consultar(arvore* aux, int num, int achou){
    if (aux != NULL && achou == 0){
        if (aux->num == num)
            achou = 1;
        else if (num < aux->num)
            achou = consultar(aux->esq, num, achou);
        else
            achou = consultar(aux->dir, num, achou);
    }
    return achou;
}

void mostraremordem(arvore* aux){
    if (aux != NULL){
        mostraremordem(aux->esq);
        cout << aux->num << "\t";
        mostraremordem(aux->dir);
    }
}

void mostrarpreordem(arvore* aux){
    if (aux != NULL){
        cout << aux->num << "\t";
        mostrarpreordem(aux->esq);
        mostrarpreordem(aux->dir);
    }
}

void mostrarposordem(arvore* aux){
    if (aux != NULL){
        mostrarposordem(aux->esq);
        mostrarposordem(aux->dir);
        cout << aux->num << "\t";
    }
}

arvore* remover(arvore* aux, int num){
    arvore *p, *p2;
    if (aux->num == num){
        if (aux->esq == aux->dir) {
            // o elemento a ser removido não tem filho
            delete aux;
            return NULL;
        } else if (aux->esq == NULL){
            // o elemento a ser removido não tem filho para a esquerda
            p = aux->dir;
            delete aux;
            return p;
        } else if (aux->dir == NULL){
            // o elemento a ser removido não tem filho para a direita
            p = aux->esq;
            delete aux;
            return p;
        } else {
            // o elemento a ser removido tem filho para ambos os lados
            p2 = aux->dir;
            p = aux->dir;
            while (p->esq != NULL)
                p = p->esq;
            p->esq = aux->esq;
            delete aux;
            return p2;
        }
    } else if (aux->num < num)
        aux->dir = remover(aux->dir, num);
    else
        aux->esq = remover(aux->esq, num);
    return aux;
}

arvore* atualiza(arvore *aux){
    if (aux != NULL){
        aux->esq = atualiza(aux->esq);
        if (aux->esq == NULL)
            aux->alte = 0;
        else if (aux->esq->alte > aux->esq->altd)
            aux->alte = aux->esq->alte+1;
        else
            aux->alte = aux->esq->altd+1;
        aux->dir = atualiza(aux->dir);
        if (aux->dir == NULL)
            aux->altd = 0;
        else if (aux->dir->alte > aux->dir->altd)
            aux->altd = aux->dir->alte+1;
        else
            aux->altd = aux->dir->altd+1;
        aux = balanceamento(aux);
    }
    return aux;
}

arvore* desalocar(arvore* aux){
    if (aux != NULL){
        aux->esq = desalocar(aux->esq);
        aux->dir = desalocar(aux->dir);
        delete aux;
    }
    return NULL;
}

int main(){
    // a árvore está vazia, logo, o ponteiro raiz tem o valor null
    arvore *raiz = NULL;
    // o ponteiro aux é um ponteiro auxiliar
    arvore *aux;
    // o ponteiro aux1 é um ponteiro auxiliar
    int op, achou, numero;
    do {
        cout << "\nMENU DE OPCOES\n";
        cout << "\n1 - Inserir na arvore";
        cout << "\n2 - Consultar um na da arvore";
        cout << "\n3 - Consultar toda a arvore em ordem";
        cout << "\n4 - Consultar toda a arvore em pre-ordem";
        cout << "\n5 - Consultar toda a arvore em pos-ordem";
        cout << "\n6 - Excluir um no da arvore";
        cout << "\n7 - Esvaziar a arvore";
        cout << "\n8 - Sair";
        cout << "\nDigite sua opcao: ";
        cin >> op;
        if (op < 1 || op > 8)
            cout << "\nOpção inválida!!";
        else if (op == 1){
            cout << "\nDigite o numero a ser inserido na arvore: ";
            cin >> numero;
            raiz = inserir(raiz, numero);
            cout << "\nNumero inserido na arvore!!";
        } else if (op == 2){
            if (raiz == NULL)
                //a árvore está vazia
                cout << "\nArvore vazia!!";
            else {
                // a árvore contém elementos
                cout << "\nDigite o elemento a ser consultado: ";
                cin >> numero;
                achou = 0;
                achou = consultar(raiz, numero, achou);
                if (achou == 0)
                    cout << "\nNumero nao encontrado na arvore!";
                else
                    cout << "\nNumero encontrado na arvore!";
            }

        } else if (op == 3){
            if (raiz == NULL)
                // a árvore está vazia
                cout << "\nArvore vazia!!";
            else {
                // a árvore contém elementos e estes serão mostrados em ordem
                cout << "\nListando todos os elementos da arvore em ordem: ";
                mostraremordem(raiz);
            }
        } else if (op == 4){
            if (raiz == NULL)
                //a árvore está vazia
                cout << "\nArvore vazia!!";
            else {
                // a árvore contém elementos e estes serão mostrados em pré-orem
                cout << "\nListando todos os elementos da arvore em pre-ordem: ";
                mostrarpreordem(raiz);
            }
        } else if (op == 5){
            if (raiz == NULL)
                //a árvore está vazia
                cout << "\nArvore vazia!!";
            else {
                // a árvore contém elementos e estes serão mostrados em pós-ordem
                cout << "\nListando todos os elementos da arvore em pos-ordem: ";
                aux = raiz;
                mostrarposordem(aux);
            }
        } else if (op == 6){
            if (raiz == NULL)
                cout << "\nArvore vazia!!";
            else {
                cout << "\nDigite o numero que seja excluir: ";
                cin >> numero;
                achou = 0;
                achou = consultar(raiz, numero, achou);
                if (achou == 0)
                    cout << "\nNumero nao encontrado na arvore!";
                else {
                    raiz = remover(raiz, numero);
                    raiz = atualiza(raiz);
                    cout << "\nNumero excluido da arvore!";
                }
            }
        } else if (op == 7){
            if (raiz == NULL)
                cout << "\nArvore vazia!!";
            else {
                raiz = desalocar(raiz);
                cout << "\nArvore esvaziada!!";
            }
        }
    }
    while (op != 8);
    //desalocando a arvore
    raiz = desalocar(raiz);
    return 0;
}