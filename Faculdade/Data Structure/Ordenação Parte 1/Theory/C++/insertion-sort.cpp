#include <iostream>
#define MAX 100
using namespace std;

void insertionSort (int A[], int qt)
{
    int key, i, j;

    for (i = 1; i < qt; i++) {
        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main ()
{
    int n, A[MAX];

    cout <<'\t'<< "Insertion Sort" << endl;
    cout << endl;
    cout << "Entre com um valor de n: ";
    cin >> n;

    cout << "Entre com " << n << " elementos: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    insertionSort (A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] <<'\t';

    return 0;
}