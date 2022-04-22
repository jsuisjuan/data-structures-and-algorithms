// beecrowd | 1010: Cálculo Simples
// https://www.beecrowd.com.br/judge/pt/problems/view/1010

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int peca1Codigo, peca1Quantidade;
    double peca1Valor;

    int peca2Codigo, peca2Quantidade;
    double peca2Valor;

    double valorFinal;

    cin >> peca1Codigo >> peca1Quantidade >> peca1Valor;
    cin >> peca2Codigo >> peca2Quantidade >> peca2Valor;

    valorFinal = (peca1Quantidade * peca1Valor) + (peca2Quantidade * peca2Valor);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorFinal << endl;

    return 0;
}