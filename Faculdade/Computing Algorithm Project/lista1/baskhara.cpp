#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    float a, b, c, delta, x, x1, x2;

    cin >> a >> b >> c;

    delta = pow(b,2) - 4 * a * c;
    if (delta > 0) {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << " and x2 = " << x2 << endl;

    } if (delta == 0) {

        x = (-b) / (2 * a);
        cout << "x = " << x << endl;

    } if (delta < 0) {

        cout << "Doesn't exist!" << endl;

    }
    return 0;
}
