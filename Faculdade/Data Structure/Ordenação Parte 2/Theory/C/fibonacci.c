#include <stdio.h>

int fibonacci (int num)
{
    if (num <= 2)
        return 1;
    else
        return (fibonacci (num - 1) + fibonacci (num - 2));
}

int main ()
{
    int n;

    printf("\n\tFibonacci\n");
    printf("\n");
    printf("Entre com a quantidade de termos da sequencia: ");
    scanf("%d" ,&n);

    printf("Sequencia Fibonacci:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t" ,fibonacci (i + 1));

    return 0;
}
