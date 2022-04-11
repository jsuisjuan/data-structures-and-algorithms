#include <iostream>
using namespace std;

int main() {

    int numeros_pares = 1;

    for (numeros_pares = 1; numeros_pares <= 100; numeros_pares++) {
        
        if (numeros_pares % 2 == 0) {
            cout << numeros_pares << endl;
        }

    }

    return 0;
}