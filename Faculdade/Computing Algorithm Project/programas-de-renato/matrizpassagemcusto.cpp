#include <iostream>

int main()
{
    int custos[][5] = {
        { 0, 5, 3, -1, -1 },
        { 5, 0, 3, 5, -1 },
        { 3, 3, 0, -1, 7 },
        { -1, 5, -1, 0, 2 },
        { -1, -1, 7, 2, 0 }
    };

    int caminho[] = { 0, 3, 4, 2 };

    int somaCusto = 0;
    for (int i = 1; i < 4; i++)
    {
        int posicaoAtual = caminho[i-1]; // Onde estou
        int proximaPosicao = caminho[i]; // Para onde vou
        if (custos[posicaoAtual][proximaPosicao] == -1)
        {
            // Nao existe o caminho
            somaCusto = -1;
            break;
        }
        somaCusto += custos[posicaoAtual][proximaPosicao];
    }
    std::cout << somaCusto << std::endl;
}