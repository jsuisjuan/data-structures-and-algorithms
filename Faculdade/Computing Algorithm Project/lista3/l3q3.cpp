#include <iostream>
using namespace std;
#define N 5

//questão 3

int getAverage (float vet[N], int qt, float average)
{
    float above = 0;

    for (int i = 0; i < N; i++)
    {
        if (vet[i] > average)
        {
            above++;
        }
    }
    return above;
}

int main ()
{
    float vet[N], sum, average, analyze;
    sum = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> vet[i];
        sum += vet[i];
    }
    average = sum / N;
    analyze = getAverage(vet, N, average);
    cout << "numbers above average: " << analyze << endl;
    return 0;
}