#include <iostream>
#define N 6

// Faça uma função que receba como parâmetro um vetor de 
// números reais, a quantidade de números armazenados no 
// vetor. Esta função deverá retornar a quantidade de números
// maiores que o último número armazenado no vetor.

int contaElementosMaioresUltimo(float vet[], int qt)
{
    int i, maiores = 0;
    // Nesse loop, estamos indo até o penultimo elemento
    // por isso usamos qt-1 e não qt como de costume.
    for (i = 0; i < qt - 1; i++)
    {
        // Um vetor com qt elementos, o ultimo está
        // armazenado na posicao qt-1
        if (vet[i] > vet[qt - 1])
        {
            maiores++;
        }
    }
    return maiores;
}

int main()
{
    int i;
    float vet[N];
    for (i = 0; i < N; i++) 
    {
        std::cin >> vet[i];
    }
    std::cout << "Elementos Maiores que o ultimo: ";
    std::cout << contaElementosMaioresUltimo(vet, N) << std::endl;
}