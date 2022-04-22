// beecrowd | 1014: Consumo
// https://www.beecrowd.com.br/judge/pt/problems/view/1014

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    double Y;

    cin >> X >> Y;

    cout << fixed << setprecision(3) << X/Y << " km/l" << endl;
    
    return 0;
}