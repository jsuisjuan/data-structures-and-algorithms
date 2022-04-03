#include <iostream>
#include <string.h>
using namespace std;

int main () {
    /*
    int array[] = {1,2,3,4,5};
    int* parray = &array[0];
    int** pparray = &parray;
    int i = 0;

    cout << **pparray << endl;

    while (i < 5) {
        cout << *parray << endl;
        parray++;
        i++;
    }
    */
    char nome[100];
    int tamanho;
    char* p;
    char* pini;
    
    cout << "Digite um nome: ";
    cin >> nome;

    tamanho = strlen(nome);
    p = &nome[tamanho - 1];
    pini = &nome[0];

    while (true) {
        cout << *p;
        if (p == pini)
            break;
        p--;
    }
    cout << endl;
    return 0;
}