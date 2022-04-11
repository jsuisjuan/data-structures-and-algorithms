#include <iostream>
using namespace std;

void insertionSort (int A[], int qt)
{
    int chave, i, j;

    for (i = 1; i < qt; i++) {
        chave = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > chave) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = chave;
    }
}

int main ()
{
    int A[6] = {35, 15, 8, 28, 47, 10};

    cout <<'\t'<< "Insertion Sort" << endl;
    cout << endl;

    insertionSort(A, 6);

    for(int i = 0; i < 6; i++)
        cout << A[i] <<'\t';
    
    return 0;
}