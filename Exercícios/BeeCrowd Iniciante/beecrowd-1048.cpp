// beecrowd | 1048: Aumento de Salário
// https://www.beecrowd.com.br/judge/pt/problems/view/1048

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario, aux;

    cin >> salario;

    if (salario >= 0 && salario <= 400.00) {
        aux = salario;
        salario += salario*0.15;
        cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << aux*0.15 << endl; 
        cout << "Em percentual: 15 %" << endl;
    } else if (salario > 400.00 && salario <= 800.00) {
        aux = salario;
        salario += salario*0.12;
        cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << aux*0.12 << endl; 
        cout << "Em percentual: 12 %" << endl;
    } else if (salario > 800.00 && salario <= 1200.00) {
        aux = salario;
        salario += salario*0.10;
        cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << aux*0.10 << endl; 
        cout << "Em percentual: 10 %" << endl;
    } else if (salario > 1200.00 && salario <= 2000.00) {
        aux = salario;
        salario += salario*0.07;
        cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << aux*0.07 << endl; 
        cout << "Em percentual: 7 %" << endl;
    } else if (salario > 2000.00) {
        aux = salario;
        salario += salario*0.04;
        cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << aux*0.04 << endl; 
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}