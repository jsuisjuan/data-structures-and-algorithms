// beecorwd | 1051: Imposto de Renda
// https://www.beecrowd.com.br/judge/pt/problems/view/1051

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario;

    cin >> salario;

    if (salario >= 0 && salario <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salario > 2000.00 && salario <= 3000.00) {
        salario = (salario - 2000.00)*0.08;
        cout << "R$ " << fixed << setprecision(2) << salario << endl;
    } else if (salario > 3000.00 && salario <= 4500.00) {
        salario = 1000.0 * 0.08 + (salario - 3000.0) * 0.18;
        cout << "R$ " << fixed << setprecision(2) << salario << endl;
    } else if (salario > 4500.00) {
        salario = 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28;
        cout << "R$ " << fixed << setprecision(2) << salario << endl;
    }
    
    return 0;
}