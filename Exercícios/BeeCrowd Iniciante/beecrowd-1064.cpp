// beecrowd | 1064: Positivos e Média
// https://www.beecrowd.com.br/judge/pt/problems/view/1064

#include <iostream>
#include <iomanip>
#define N 6
using namespace std;

int main() {
    double numeros[N], soma, media;
    int contador;

    contador = 0;
    soma = 0.0;

    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
        if (numeros[i] > 0.0) {
            soma += numeros[i];
            contador++;
        }
    }

    media = soma/contador;
    cout << contador << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}