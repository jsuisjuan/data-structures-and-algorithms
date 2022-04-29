// beecrowd | 1067: Números Ímpares
// https://www.beecrowd.com.br/judge/pt/problems/view/1067

#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cin >> numero;
    } while (numero < 1 && numero > 1000);

    for (int i = 1; i <= numero; i++) {
        if (i%2!=0) {
            cout << i << endl;
        }
    }

    return 0;
}