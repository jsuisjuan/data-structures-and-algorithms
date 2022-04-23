// beecrowd | 1036: Fórmula de Bhaskara
// https://www.beecrowd.com.br/judge/pt/problems/view/1036

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    double bhaskara, x1, x2;

    cin >> a >> b >> c;

    bhaskara = (pow(b, 2)-4*a*c);

    if (bhaskara <= 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        x1 = (-b+sqrt(bhaskara))/(2*a);
        x2 = (-b-sqrt(bhaskara))/(2*a);

        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }
   
    return 0;
}