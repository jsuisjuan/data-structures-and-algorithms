#include <iostream>
using namespace std;

/*
    Cálculo do fatorial
    0! = 1! = 1
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
    5! = 5 * 4 * 3 * 2 * 1 = 120
*/

int main () {
    int numero, fatorial = 1;

    cout << "Digite um numero: ";
    cin >> numero;

    for (int i = 1; i < numero; i++){
        fatorial *= (i + 1);  
    }
        
    cout << "Fatorial: " <<fatorial << endl;

    return 0;
}