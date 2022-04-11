#include <iostream>
using namespace std;
#define MAX 100

int main () {
    int n, aux, A[MAX];

    cout <<'\t'<< "Bubble Sort (Ordenacao por Troca)" << endl;
    cout << endl;
    cout << "Entre com um valor de n: ";
    cin >> n;

    cout << "Entre com " << n << " elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] > A[j]) {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
    
    for (int i = 0; i < n; i++)
            cout << A[i] << " ";

    cout << endl;

    return 0;
}