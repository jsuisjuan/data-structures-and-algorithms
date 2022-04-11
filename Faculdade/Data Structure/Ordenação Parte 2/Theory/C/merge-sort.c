#include <stdio.h>
#define MAX 100

void mergesort(int [], int, int);
void intercala(int [], int, int, int);

int main ()
{
    int n, A[MAX];

    printf("\n\tMerge Sort\n");
    printf("\n");

    printf("Entre com 8 valores: ");
    for (int i = 0; i < 8; i++)
        scanf("%d" ,&A[i]);

    mergesort(A, 0, 7);  

    for (int i = 0; i < 8; i++)
        printf("%d ", A[i]);

    return 0;
}

void mergesort(int A[], int inicio, int fim)
{
    int meio;

    if (inicio < fim) {
        meio = (inicio+fim) / 2;
        mergesort(A, inicio, meio);
        mergesort(A, meio+1, fim);
        intercala(A, inicio, fim, meio);
    }
}

void intercala(int A[], int inicio, int fim, int meio)
{
    int i, aux[8];
    int posLivre = inicio;
    int inicioA1 = inicio;
    int inicioA2 = meio + 1;

    while (inicioA1 <= meio && inicioA2 <= fim)
    {
        if (A[inicioA1] > A[inicioA2]) {
            aux[posLivre] = A[inicioA2];
            inicioA2++;
        } else {
            aux[posLivre] = A[inicioA1];
            inicioA1++;
        }
        
        posLivre++;
    }

    for (i = inicioA1; i <= meio; i++) {
        aux[posLivre] = A[i];
        posLivre++;
    }
    for (i = inicioA2; i <= fim; i++) {
        aux[posLivre] = A[i];
        posLivre++;
    }
    for (i = inicio; i <= fim; i++)
        A[i] = aux[i];
}