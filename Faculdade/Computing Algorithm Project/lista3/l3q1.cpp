#include <iostream>
using namespace std;
#define N 3

/*questão 1*/

int averageCalculator (int vet[N], int qt)
{
    int i, average, sum;
    qt = 0;
    sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum + vet[i];
        qt++;
    }
    average = sum / N;
    return average;
}
int main ()
{
    int numeros[] = {20, 30, 40};
    int average;

    average = averageCalculator(numeros, 3);
    cout << "the average between the numbers is " << average << endl;
    return 0;
}
