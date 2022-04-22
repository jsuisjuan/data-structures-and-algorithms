// beecrowd | 1008: Salário
// https://www.beecrowd.com.br/judge/pt/problems/view/1008

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero, horasTrabalhadas;
    double salario;

    cin >> numero >> horasTrabalhadas >> salario;

    salario *= horasTrabalhadas;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}