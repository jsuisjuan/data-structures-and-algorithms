#include <iostream>
#define N 3

int main()
{
    int i;
    float soma, media, notas[N]; // Cabem N elementos
    soma = 0;
    for (i = 0; i < N; i++)
    {
        std::cin >> notas[i]; // Primeiro indice 0
        soma += notas[i];
    }
    media = soma / N;
    for (i = 0; i < N; i++)
    {
        if (notas[i] > media)
        {
            std::cout << notas[i] << std::endl;
        }
    }
}
