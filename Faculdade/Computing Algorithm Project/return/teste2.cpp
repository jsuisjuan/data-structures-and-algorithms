#include <iostream>
using namespace std;
#define N 3

//Faça  uma  função  que  receba  como  parâmetro  um  vetor  de  números  reais  e  a  quantidade  de  números armazenados no vetor. 
//Esta função deverá retornar o maior número armazenado no vetor.

float selecionarMaior (float vetor[], int qt) 
{
    int i; 
    float maior = vetor[0];

    for (i = 1; i < qt; i++) 
    {
        if (vetor[i] > maior) 
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int main () 
{
    int i;
    float vetor[N];

    for (i = 0; i < N; i++) 
    {
        cin >> vetor[i];
    }
    cout << "O maior elemento: " << selecionarMaior(vetor, N) << endl;

    return 0;
}