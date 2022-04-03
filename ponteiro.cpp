#include <iostream>
using namespace std;

void foo (int* n) {
    *n = 20;
}

int main () {
    /*
    int var = 10;
    int* pvar;
    pvar = &var;
    foo(pvar);

    int* vet = new int[10];
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl;

    cout << aux[0] << endl;
    cout << aux[1] << endl;
    cout << aux[2] << endl;
    
    for (int i = 0; i < sizeof(aux)/sizeof(int); i++)
        cout << aux[i] << endl;
    */

    int* vet = new int[10];

    cout << "Digite um numero: ";
    cin >> *(vet);
    cout << "Voce digitou: " << *(vet);

    delete(vet);
    vet = NULL;
    cout << "Voce digitou: " << *(vet);
    return 0;
}