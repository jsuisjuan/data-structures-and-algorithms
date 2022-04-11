#include <iostream>
using namespace std;
#define N 100

int main () {
    int vetor[N];

    for (int i = 0; i < N; i++)
        vetor[i] = i;

    for (int i = 0; i < N; i++)
        cout << vetor[i] << endl;

    cout << sizeof(vetor) << endl;
    return 0;
}