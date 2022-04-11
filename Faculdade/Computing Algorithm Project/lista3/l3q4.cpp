#include <iostream>
using namespace std;
#define N 3
//questão 4

int highNumber (float vet[N], int qt)
{
    int last = 0;
    int counter = 0;

    for (int i = 0; i < N; i++)
    {
        if (vet [i] > vet[i]-1)
        {
            last = vet[i];
        }  
    }
    for (int j = 0; j < N; j++)
    {
        if (last < vet[j])
        {
            counter++;
        }
    }
    return counter;
}

int main ()
{
    float vet[N];
    int numbers;

    for (int i = 0; i < N; i++)
    {
        cin >> vet[i];
    }
    numbers = highNumber (vet, N);
    cout << "the number of numbers above the last one is: " << numbers << endl;
    return 0;
}