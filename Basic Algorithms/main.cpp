#include <iostream>
#include "include/my-math.h"

using namespace std;

int main () {
    int n = 5;

    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
    cout << "Area do Quadrado com lado " << n << ": " << areaQuadrado(n) << endl;
    cout << "Area do Retangulo com lado " << n << " e base " << n << ": " << areaRetangulo(n,n) << endl;
    return 0;
}