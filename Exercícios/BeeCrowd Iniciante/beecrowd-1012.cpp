// beecrowd | 1012: Área
// https://www.beecrowd.com.br/judge/pt/problems/view/1012

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    double triangulo, circulo, trapezio;
    double quadrado, retangulo, pi;

    pi = 3.14159;

    cin >> A >> B >> C;

    // Área do Triangulo
    triangulo = (A * C) / 2;

    // Área do Circulo
    circulo = pi * (C*C);

    // Área do Trapézio
    trapezio = ((A + B) * C) / 2;

    // Área do Quadrado
    quadrado = B * B;

    // Área do Retangulo
    retangulo = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;
    
    return 0;
}