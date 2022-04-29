// beecrowd | 1070: Seis Números Ímpares
// https://www.beecrowd.com.br/judge/pt/problems/view/1070

#include <iostream>
using namespace std;

int main() {
    int numero;

    cin >> numero;

    for (int i = 0; i < 6; i++) {
        if (numero % 2 != 0) {
            cout << numero << endl;
        }
        numero++;
    }

    return 0;
}