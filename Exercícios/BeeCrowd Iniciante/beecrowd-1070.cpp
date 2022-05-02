// beecrowd | 1070: Seis Números Ímpares
// https://www.beecrowd.com.br/judge/pt/problems/view/1070

#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cin >> numero;
    
    while (contador < 6) {
        if (numero%2!=0) {
            cout << numero << endl;
            contador++;
        }
        numero++;
    }

    return 0;
}