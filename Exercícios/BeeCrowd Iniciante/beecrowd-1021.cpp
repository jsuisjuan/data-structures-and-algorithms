// beecrowd | 1021: Notas e Moedas
// https://www.beecrowd.com.br/judge/pt/problems/view/1021

#include <iostream>
#include <iomanip>
#define Q 6
using namespace std;

int main() {
    double N, troco = 0.0;

    double notas [] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    double moedas [] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};

    do {
        cin >> N;
    } while (N < 0.0 || N > 1000000.0);

    cout << "NOTAS:\n";
    for (int i = 0; i < Q; i++) {
        int quantidadeNotas = 0;    
        while (troco <= N) {        
            troco += notas[i];      
            if (troco > N) {        
                troco -= notas[i];  
                break;
            }
            quantidadeNotas++;
        }
        cout << quantidadeNotas << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] << endl;
        if (troco == N && notas[i] == notas[5]) {   
            break;
        } 
    }
    
    
    cout << "MOEDAS:\n";
    for (int i = 0; i < Q; i++) {
        int quantidadeMoedas = 0;
        while (troco <= N) {
            troco += moedas[i];
            if (troco > N) {
                troco -= moedas[i];
                break;
            }
            quantidadeMoedas++;
        }
        cout << quantidadeMoedas << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
        if (troco == N && moedas[i] == moedas[5]) {
            break;
        }
    }
    
    return 0;
}

/* Este foi o metodo que funcionou no beecrowd, a pesar do meu ser mais automático
 #include <iostream>

using namespace std;

int main(){
    double N;
    int inteiro, aux, aux1;

    while(cin >> N){

    inteiro = N;
    N = 100*N;
    aux1 = N;


    cout << "NOTAS:\n";
    cout << inteiro/100 << " nota(s) de R$ 100.00\n";
    aux = (inteiro%100);
    cout << aux/50 << " nota(s) de R$ 50.00\n";
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20.00\n";
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10.00\n";
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5.00\n";
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2.00\n";
    aux = (aux%2);
    cout << "MOEDAS:\n";
    cout << aux/1 << " moeda(s) de R$ 1.00\n";

    aux1 = aux1%100;
    cout <<  aux1/50 << " moeda(s) de R$ 0.50\n";
    aux1 = aux1%50;
    cout <<  aux1/25 << " moeda(s) de R$ 0.25\n";
    aux1 = aux1%25;
    cout <<  aux1/10 << " moeda(s) de R$ 0.10\n";
    aux1 = aux1%10;
    cout <<  aux1/5 << " moeda(s) de R$ 0.05\n";
    aux1 = aux1%5;
    cout <<  aux1/1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}
*/