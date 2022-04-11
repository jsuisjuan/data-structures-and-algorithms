#include <iostream>
using namespace std;
#define N 3
//questão 5

int getHigher (int vet[N], int qt)
{
    int high;
    high = 0;
    for (int i = 0; i < N; i++)
    {
        if (vet[i] == 0 || vet[i] > high)
        {
            high = vet[i];
        }
    }
    return high;
}
int main ()
{
    int i, vet[N], numeros;
    cout << "digite os numeros: " << endl;
    for (i = 0; i < N; i++)
    {
        cin >> vet[i];
    }
    numeros = getHigher (vet, N);
    cout << "o maior numero e: " << numeros << endl;
    return 0;
}