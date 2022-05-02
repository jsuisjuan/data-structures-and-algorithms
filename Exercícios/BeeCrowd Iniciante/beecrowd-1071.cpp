// beecrowd | 1071: Soma de Impares Consecutivos I
// https://www.beecrowd.com.br/judge/pt/problems/view/1071

#include <iostream>
using namespace std;

int main() {
    int x, y, soma = 0;
    int min, max;

    cin >> x >> y;

    if (x < y) {
        min = x;
        max = y;
    } else {
        max = x;
        min = y;
    }

    for (int i = (min+1); i < max; i++) {
        if (i % 2 != 0){
            soma += i;
        }
    }

    cout << soma << endl;
    
    return 0;
}