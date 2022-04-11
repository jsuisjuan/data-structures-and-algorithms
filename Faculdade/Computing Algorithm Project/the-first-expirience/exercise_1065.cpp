#include <iostream>
using namespace std;

int main() {

    int A, B, C, D, E;
    int quantidade = 0;

    cin >> A >> B >> C >> D >> E;

    if (A % 2 == 0) {
        quantidade++;
    }
    if (B % 2 == 0) {
        quantidade++;
    }
    if (C % 2 == 0) {
        quantidade++;
    }
    if (D % 2 == 0) {
        quantidade++;
    }
    if (E % 2 == 0) {
        quantidade++;
    }

    cout << quantidade << " valores pares" << endl;

    return 0;
}