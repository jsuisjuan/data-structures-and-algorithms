#include <iostream>
using namespace std;

void maiorNumero (int vet[], int qt)
{
    int maior = vet[0];

    for (int i = 0; i < 10; i++)
    {    
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    cout << "O maior numero e: " << maior << endl;
}

int main ()
{
    int vet[10];
    
    cout << "Insira 10 numeros inteiros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> vet[i];
    }
    maiorNumero(vet, 10);
    return 0;
}