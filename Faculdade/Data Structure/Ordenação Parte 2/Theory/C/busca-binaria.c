#include <stdio.h>
#define T 7

void binario(int A[], int x, int inicio, int fim) 
{
    int meio = (inicio + fim) / 2;

    if(x == A[meio])
        printf("%d esta na posicao: %d" ,x,meio+1);
    else
        if(x < A[meio])
            binario(A, x, inicio, meio);
        else
            binario(A, x, meio+1, fim);
}

int main()
{
    int num, A[7] = {9,15,25,32,44,50,90};

    printf("Numero a ser buscado: ");
    scanf("%d" ,&num);
    binario(A, num, 0, T);

    return 0;
}