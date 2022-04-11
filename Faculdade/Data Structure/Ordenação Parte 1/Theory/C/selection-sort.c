#include <stdio.h>
#define MAX 100

int main ()
{
    int n, aux, menor, A[MAX];

    printf("\n\tSelection Sort (Ordenacao por Parte\n");
    printf("\n");
    printf("Entre com um valor a n: ");
    scanf("%d" ,&n);

    printf("Entre com %d elementos: " ,n);
    for (int i = 0; i < n; i++)
        scanf("%d" ,&A[i]);
    
    for (int i = 0; i < n; i++) {
        menor = i;
        for (int j = i; j < n; j++) {
            if (A[menor] > A[j])
                menor = j;
        }
        aux = A[i];
        A[i] = A[menor];
        A[menor] = aux;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
        
    return 0;
}