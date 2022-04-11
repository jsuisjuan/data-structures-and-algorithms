#include <stdio.h>
#define MAX 100

int main ()
{
    int n, aux, A[MAX];

    printf("\n\tBubble Sort (Ordenacao por Partes)\n");
    printf("\n");
    printf("Entre com um valor de n: ");
    scanf("%d" ,&n);

    printf("Entre com %d elementos: " ,n);
    for (int i = 0; i < n; i++)
        scanf("%d" ,&A[i]);
    
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] > A[j]) {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
    
    for (int i = 0; i < n; i++)
        printf("%d " ,A[i]);
    
    printf("\n");

    return 0;
}