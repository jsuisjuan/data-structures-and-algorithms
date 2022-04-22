// beecrowd | 1009: Salário com Bônus
// https://www.beecrowd.com.br/judge/pt/problems/view/1009

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double salario, montante;

    cin >> nome >> salario >> montante;

    montante *= 0.15;
    salario += montante;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}