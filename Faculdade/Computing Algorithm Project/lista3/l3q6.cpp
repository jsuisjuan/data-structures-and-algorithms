#include <iostream>
using namespace std;
#define N 3

//questão 6

int getSum (float vet1[N], float vet2[N], int qt)
{
    float sum[N];
    

    for (int i = 0; i < N; i++)
    {
        sum[i] = vet1[i] + vet2[i];
        cout << "the sum of this two arrays is: " << sum[i] << endl;
    }
    return sum[N];
}
int main()
{
    float vet1[N], vet2[N], sum;

    cout << "put the numbers of the array one:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> vet1[i];
    }
    cout << "put the numbers of the array two:" << endl;
    for (int j = 0; j < N; j++)
    {
        cin >> vet2[j];
    }
    sum = getSum (vet1, vet2, N);
   
    return 0;
}