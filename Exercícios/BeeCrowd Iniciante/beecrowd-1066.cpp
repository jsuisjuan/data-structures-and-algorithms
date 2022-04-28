// beecrowd | 1066: Pares, Ímpares, Positivos e Negativos
// https://www.beecrowd.com.br/judge/pt/problems/view/1066

#include <iostream>
#define N 5
using namespace std;

int main() {
    int numeros[N];
    int par, impar, positivo, negativo;

    par = 0;
    impar = 0;
    positivo = 0;
    negativo = 0;

    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0) {
                if (numeros[j]%2==0) {
                    par++;
                }
            } else if (i == 1) {
                if (numeros[j]%2!=0) {
                    impar++;
                }
            } else if (i == 2) {
                if (numeros[j] > 0) {
                    positivo++;
                }
            } else if (i == 3) {
                if (numeros[j] < 0) {
                    negativo++;
                }
            }
        }
    }

    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n";
    cout << negativo << " valor(es) negativo(s)\n";

    return 0;
}