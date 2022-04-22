// beecrowd | 1011: Esfera
// https://www.beecrowd.com.br/judge/pt/problems/view/1011

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double raio, pi, volume;

    pi = 3.14159;

    cin >> raio;

    volume = (4.0/3) * pi * pow(raio, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}