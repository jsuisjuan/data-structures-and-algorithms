// beecrowd | 1018: Cédulas
// https://www.beecrowd.com.br/judge/pt/problems/view/1018

#include <iostream>
#include <iomanip>
using namespace std;

// meu código que funciona mas não vou deletar ele pois ficou muito bonito
int main() {
    int N, cedulas [] = {100, 50, 20, 10, 5, 2, 1};
    double troco = 0.00;

    do {
        cin >> N;
    } while (N < 0 || N > 1000000);

    cout << N << endl;
    for (int j = 0; j < cedulas[7]; j++) {
        int quantidadeNotas = 0;
        while (troco <= N) {
            troco += cedulas[j];
            if (troco > N) {
                troco -= cedulas[j];
                break;
            }
            quantidadeNotas++;
        }

        cout << quantidadeNotas << " nota(s) de R$ " << fixed  << setprecision(2) << (double)cedulas[j] << endl;

        if (troco == N && cedulas[j] == cedulas[6]) {
            break;
        }
    }
    
    return 0;
}

// código sem sal que por algum motivo é o único que funciona no beecrowd
/*
int main(){
    int inteiro, aux;
    
    cin >> inteiro;
    
    cout << inteiro <<"\n";
    cout << inteiro/100 << " nota(s) de R$ 100,00\n";
    aux = (inteiro%100);
    cout << aux/50 << " nota(s) de R$ 50,00\n";
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20,00\n";
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10,00\n";
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5,00\n";
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2,00\n";
    aux = (aux%2);
    cout << aux/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
*/