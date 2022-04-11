#include <iostream>
#define T 7
using namespace std;

void heapsort(int[], int);
void heap(int[], int);
void descer(int[], int, int);
void troca(int*, int*);

int main () {
    int A[T] = {35, 18, 30, 2, 27, 50, 10};
    int i;
    //função transforma o array num heap
    heapsort(A,T);
    //ordenação
    for (i = 0; i < T; i++)
        cout << A[i] << " ";
    return 0;
}

void heapsort(int A[], int n){
    int i;
    heap(A,T);
    for (i = n-1; i >= 1; i--){
        troca(&A[0], &A[i]);
        cout << i << endl;
        descer(A,0,i-1);
    }
}

void heap(int A[], int t){
    for (int i = (t/2)-1; i >= 0; i--){
        descer(A, i, t-1);

    }
        
        
}

void descer(int A[], int i, int q){
    int d = 2*i+2; //array incia com 0
    int e = 2*i+1; 
    
    int maior = i;
    //verificar se tem filhos e comparar com d(direita) e (esquerda).
    if (d <= q && A[d] > A[i])
        maior = d;
    if (e <= q && A[e] > A[maior])
        maior = e;
    
    if (maior != i){
        //trocar com o maior dos filhos e chamar função novamente
        troca(&A[i], &A[maior]);
        
        descer(A, maior, q);
    }
}

void troca(int *a, int *b){
    int aux;
   
    aux = *a;
    *a = *b;
    *b = aux;
}