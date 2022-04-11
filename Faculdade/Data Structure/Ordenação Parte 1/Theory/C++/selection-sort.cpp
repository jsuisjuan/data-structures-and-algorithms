#include <iostream>
#define MAX 100
using namespace std;

int main ()
{
    int n, aux, menor, A[MAX];

    cout <<'\t'<< "Selection Sort" << endl;
    cout << endl;
    cout << "Entre com um valor a n: ";
    cin >> n;

    cout << "Entre com "<< n << " elementos: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    for (int i = 0; i < n; i++) {
        menor = i;
        for (int j = i; j < n; j++) {
            if (A[menor] > A[j])
                menor = j;
        }
        aux = A[i];
        A[i] = A[menor];
        A[menor] = aux;
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
        
    return 0;
}