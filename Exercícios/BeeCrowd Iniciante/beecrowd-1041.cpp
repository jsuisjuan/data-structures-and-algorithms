// beecrowd | 1041: Coordenadas de um Ponto
// https://www.beecrowd.com.br/judge/pt/problems/view/1041

#include <iostream>
using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if (x != 0 && y == 0) {
        cout << "Eixo X" << endl;
    } else if (x == 0 && y != 0) {
        cout << "Eixo Y" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else {
        cout << "Origem" << endl;
    }

    return 0;
}