#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main () {
    double raio,area;

    cin >> raio;

    area = 3.14159 * pow(raio,2);

    cout << fixed << setprecision (4) <<endl;
    cout << "A=" << area << endl;
    return 0;
}