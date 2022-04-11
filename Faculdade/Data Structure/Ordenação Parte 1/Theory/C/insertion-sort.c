#include <stdio.h>
#define MAX 100

void insertionSort (int A[], int qt)
{
    int key, i, j;

    for (i = 1; i < qt; i++) {
        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main ()
{
    int n, A[MAX];

    printf("\n\tInsertion Sort\n");
    printf("\n");
    printf("Entre com um valor de n: ");
    scanf("%d" ,&n);

    printf("Entre com %d elementos: " ,n);
    for (int i = 0; i < n; i++)
        scanf("%d" ,&A[i]);
    
    insertionSort (A, n);

    for (int i = 0; i < n; i++)
        printf("%d " ,A[i]);

    return 0;
}