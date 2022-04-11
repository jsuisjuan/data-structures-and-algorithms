#include <iostream>
using namespace std;

void quickSort (int[], int, int);
void troca (int*, int*);

int main ()
{
    int i, A[5];

    cout <<'\t'<< "Quick Sort" << endl;
    cout << endl;

    cout << "Entre com 5 valores: ";
    for (i = 0; i < 5; i++) 
        cin >> A[i];

    quickSort(A, 0, 4);

    for (i = 0; i < 5; i++)
        cout << A[i] <<'\t';

    return 0;
}

void quickSort(int A[], int inicio, int fim) {
    int i, j, chave;

    if(fim - inicio < 2) {
        if((fim - inicio) == 1) {
            if(A[inicio] > A[fim])
            {
                troca(&A[inicio], &A[fim]);
            }
        }
    } else {
        i = inicio;
        j = fim;
        chave = A[inicio];

        while(j > i)
        {
            i++;

            while(A[i] < chave){
                i++;
            }
            while(A[j] > chave){
                j--;
            }
            if(j > i){
                troca(&A[i], &A[j]);
            }
        }

        troca(&A[inicio], &A[j]);
        quickSort(A, inicio, j-1);
        quickSort(A, j+1, fim);
    }
}

void troca (int *x, int *y)
{
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}