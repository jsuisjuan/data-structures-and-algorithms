// beecrowd | 1074: Par ou Ímpar
// https://www.beecrowd.com.br/judge/pt/problems/view/1074

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N; 
    int numeros[N];

    do {
        cin >> N;
    } while (N > 10000);

    for (int i = 0; i < N; i++) {
            cin >> numeros[i];
        if (numeros[i] < pow(-10,7) || numeros[i] > pow(10,7)) {
            cin >> numeros[i];
        }
        
        if (numeros[i] == 0) {
            cout << "NULL\n";
        } else {
            if (numeros[i] % 2 == 0) {
                cout << "EVEN ";
            } if (numeros[i] % 2 != 0) {
                cout << "ODD ";
            } if (numeros[i] > 0) {
                cout << "POSITIVE\n";
            } if (numeros[i] < 0) {
                cout << "NEGATIVE\n";
            }
        }
    }

    return 0;
}