#include <iostream>
using namespace std;
#define N 3
//questão 3

void numberAnalyze (int vet[N], int qt, int& par, int& impar)
{
    par = 0;
    impar = 0;

    for (int i = 0; i < N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
}
int main ()
{
    int i, vet[N]; 
    int par, impar;
    par = 0;
    impar =0;
    for (i = 0; i < N; i++)
    {
        cin >> vet[i];
    }

    numberAnalyze (vet, N, par, impar);
    cout << "numeros pares: " << par << endl;
    cout << "numeros impares: " << impar << endl;

    return 0;
}