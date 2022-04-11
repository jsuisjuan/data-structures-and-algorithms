#include <iostream>

#define N 3

void contaParImpar(int vet[], int qt, int& par, int& impar)
{
    int i;
    par = 0;
    impar = 0;

    for (i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0) // Par
        {
            par++;
        }
        else // Impar
        {
            impar++;
        }
    }
}

int main()
{
    int i, vet[N];
    int np = 0, ni = 0;
    for (i = 0; i < N; i++)
    {
        std::cin >> vet[i];
    }

    contaParImpar(vet, N, np, ni);

    std::cout << "- Pares: " << np << std::endl;
    std::cout << "- Impares: " << ni << std::endl;
}