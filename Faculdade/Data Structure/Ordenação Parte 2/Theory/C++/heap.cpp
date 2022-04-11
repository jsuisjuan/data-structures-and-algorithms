#include <iostream>
using namespace std;

int  menu();
void subir(int [], int);
void descer(int [], int, int);
void inserir(int [],int , int*);
void remover(int [], int*);
void troca (int*, int*);

int main(){
    int A[9] = {9, 58, 83, 35, 100, 65, 79, 20};
    int op, item;
    do {
        op = menu();
        switch(op){
            case 1: subir(A, 4); break;
            case 2: descer(A, 0, 8); break;
            case 3:
                cout << "\nDigite um valor a ser inserido: ";
                cin >> item;
                int *array = new int[item];
                inserir(A,item, array);
                break;
            case 4:
                cout << "\nDigite um valor a ser removido: ";
                cin >> item;
                //remover(A, *item);
                break;
        }
    } while (op != 0);
    for(int i = 0; i < 8; i++)
        cout << A[i] << " ";
    return 0;
}

int menu(){
    int opcao;
    cout << "\n1.Subir"
         <<"\n2.Descer"
         <<"\n3.Inserir"
         <<"\n4.Remover"
         <<"\n0.Sair"
         <<"\n\nDigite a opcao: ";
    cin >> opcao;
    return opcao;
}
void subir(int A[], int i){
    int j = i/2;
    if(j >= 0)
        if(A[i] > A[j]){
            troca(&A[i], &A[j]);
            subir(A,j);
        }
}

void descer(int A[], int i, int q){
    int d = 2*i + 2;    //se array iniciar com 1, d = 2*i+1
    int e = 2*i + 1;    //se arrray inciar com 1, e = 2*i

    int maior = i;
    //verificar se tem filhos e comparar com d(direita) e (esquerda).
    if(d <= q && A[d] > A[i])
        maior = d;
    if(e <= q && A[e] > A[maior])
        maior = e;
    if(maior != i){
        troca(&A[i], &A[maior]);
        descer(A, maior, q);
    }
}

void inserir(int A[], int valor, int *t){
    *t = *t + 1;
    A[*t] = valor;
    subir(A, *t);
}

void remover(int A[], int *q){
    A[0] = A[*q];
    *q = *q - 1;
    descer(A, 0, *q);
}

void troca (int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}