#include <iostream>

using namespace std;

struct Escola {
    string nome;
    int ouro;
    int prata;
    int bronze;
};

Escola quadroMedalha[30];
int qt = 0;

struct Resultado {
    string nome;
    string modalidade;
    char tipoMedalha;
};

Resultado resultados[] = {
    { "MILITAR", "VOLEI", 'P' },
    { "CEFET", "FUTEBOL", 'O' },
    { "CP2", "NATACAO", 'B' },
    { "CEFET", "NATACAO", 'O' },
    { "MILITAR", "VOLEI", 'O' },
    { "CP2", "VOLEI", 'O' },
    { "MILITAR", "VOLEI", 'P' }
};

int buscaEscola(string nome)
{
    for (int i = 0; i < qt; i++)
    {
        if (quadroMedalha[i].nome == nome)
        {
            return i;
        }
    }
    // Nao Encontrei...
    quadroMedalha[qt].nome = nome;
    quadroMedalha[qt].ouro = 0;
    quadroMedalha[qt].prata = 0;
    quadroMedalha[qt].bronze = 0;
    qt++;
    return qt - 1;
}

void imprimeQuadroMedalha()
{
    int posicaoVencedor, pontosVencedor;
    for (int i = 0; i < qt; i++)
    {
        int pontos = quadroMedalha[i].ouro*5 + quadroMedalha[i].prata*3 + quadroMedalha[i].bronze;
        if (i == 0 || pontos > pontosVencedor)
        {
            posicaoVencedor = i;
            pontosVencedor = pontos;
        }
        cout << quadroMedalha[i].nome << " ";
        cout << quadroMedalha[i].ouro << " ";
        cout << quadroMedalha[i].prata << " ";
        cout << quadroMedalha[i].bronze << " ";
        cout << pontos << endl;
    }
    cout << "A escola " << quadroMedalha[posicaoVencedor].nome << " ganhou com " << pontosVencedor << endl;
}

void imprimeQuadroMedalhaComEmpate()
{
    int pontosVencedor;
    for (int i = 0; i < qt; i++)
    {
        int pontos = quadroMedalha[i].ouro * 5 + quadroMedalha[i].prata * 3 + quadroMedalha[i].bronze;
        if (i == 0 || pontos > pontosVencedor)
        {
            pontosVencedor = pontos;
        }
        cout << quadroMedalha[i].nome << " ";
        cout << quadroMedalha[i].ouro << " ";
        cout << quadroMedalha[i].prata << " ";
        cout << quadroMedalha[i].bronze << " ";
        cout << pontos << endl;
    }

    for (int i = 0; i < qt; i++)
    {
        int pontos = quadroMedalha[i].ouro * 5 + quadroMedalha[i].prata * 3 + quadroMedalha[i].bronze;
        if (pontos == pontosVencedor)
        {
            cout << "A escola " << quadroMedalha[i].nome << " ganhou com " << pontosVencedor << endl;
        }
    }

}

void ordenaDecrescente()
{
    int posicaoVencedor, pontosVencedor;

    for (int j = 0; j < qt; j++)
    {
        for (int i = j; i < qt; i++)
        {
            int pontos = quadroMedalha[i].ouro * 5 + quadroMedalha[i].prata * 3 + quadroMedalha[i].bronze;
            if (i == j || pontos > pontosVencedor)
            {
                posicaoVencedor = i;
                pontosVencedor = pontos;
            }
        }
        Escola aux = quadroMedalha[j];
        quadroMedalha[j] = quadroMedalha[posicaoVencedor];
        quadroMedalha[posicaoVencedor] = aux;
    }

}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        int l = buscaEscola(resultados[i].nome);
        if (resultados[i].tipoMedalha == 'O')
        {
            quadroMedalha[l].ouro++;
        }
        else if (resultados[i].tipoMedalha == 'P')
        {
            quadroMedalha[l].prata++;
        }
        else if (resultados[i].tipoMedalha == 'B')
        {
            quadroMedalha[l].bronze++;
        }
    }
    ordenaDecrescente();
    imprimeQuadroMedalhaComEmpate();
}