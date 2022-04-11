#include <stdio.h>
#include <stdbool.h>
#define T 7

void sequencial(int A[], int x) 
{
    bool achei = false;
    int i = 0;

    while(!achei && i < T) {
        if(A[i] == x) {
            achei = true;
            printf("Posicao: %d" ,i + 1);
        } else i++;
    }
}

int main()
{
    int num, A[7] = {15,30,25,12,50,10,9};

    printf("Numero a ser buscado: ");
    scanf("%d" ,&num);
    sequencial(A, num);

    return 0;
}