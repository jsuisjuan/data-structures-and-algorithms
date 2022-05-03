// beecrowd | 1072: Intervalo 2
// https://www.beecrowd.com.br/judge/pt/problems/view/1072

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, in, out;
    int numeros[N];

    in = 0;
    out = 0;

    do {
        cin >> N;
    } while (N > 10000);

    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
        if (numeros[i] < pow(-10,7) || numeros[i] > pow(10,7)) {
            cin >> numeros[i];
        }
        if (numeros[i] >= 10 && numeros[i] <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in\n";
    cout << out << " out\n";

    return 0;
}

/* O meu programa está funcionando perfeitamente, eu só add uma condição a mais que o pedido.
int main(){
    int x, a;
    
    int in = 0;
    int out = 0;
    
    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a >= 10 && a <= 20) in++;
            else out++;
    }
    cout << in << " in\n";
    cout << out << " out\n";
    
    return 0;
}
*/