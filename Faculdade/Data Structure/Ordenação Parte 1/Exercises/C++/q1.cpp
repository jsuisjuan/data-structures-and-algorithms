#include <iostream>
#define N 5
using namespace std;

//Elaborar um probrama em que leia 50 números inteiros(sem repetição), classifique-os em ordem crescente
//usando os três métodos de organização(Bubble Sort, Selection Sort e Insertion Sort).
//OBS.:Ainda falta implementar o Insertion Sort

void bubbleSort(int arr[]) {
    int aux;

    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}

void selectionSort(int arr[]) {
    int aux, menor;

    for (int i = 0; i < N; i++) {
        menor = i;
        for (int j = i; j < N; j++) {
            if (arr[menor] > arr[j])
                menor = j;
        }
        aux = arr[i];
        arr[i] = arr[menor];
        arr[menor] = aux;
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}

int main ()
{
    int A[N] = {15, 10, 4, 8, 6}; 

    cout <<'\t'<< "Bubble Sort" << endl;
    cout << endl;
    bubbleSort(A);   

    cout <<'\t'<< "Selection Sort" << endl;
    cout << endl;
    selectionSort(A);

    return 0;
}