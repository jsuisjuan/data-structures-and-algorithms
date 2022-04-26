// beecrowd | 1042: Sort Simples
// https://www.beecrowd.com.br/judge/pt/problems/view/1042

#include <iostream>
#define N 3
using namespace std;

int main() {
    int numero [N], numerocopy[N];
    int aux, maior = 0;

    
    // receber os valores
    for (int i = 0; i < N; i++) {
        cin >> numero[i];
    }

    // armazenar uma copia da array original
    for (int i = 0; i < N; i++) {
        numerocopy[i] = numero[i];
    }

    // sort simples (Bubble Sort)
    for (int i = 0; i < N-1; i++) {         // i = 0 - 1 pois i < 2
        for (int j = i+1; j < N; j++) {     // j = 1 - 2 pois j < 3
            if (numero[i] > numero[j]) {    // aqui acontece a comparação
                aux = numero[i];            // alteração dos valores nos indices
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }

    // imprimir os valores em sort
    for (int i = 0; i < N; i++) {
        cout << numero[i] << endl;
    }

    cout << endl;

    // imprimier os valores originais
    for (int i = 0; i < N; i++) {
        cout << numerocopy[i] << endl;
    }    

    return 0;
}