// beecrowd | 1044: Múltiplos
// https://www.beecrowd.com.br/judge/pt/problems/view/1044

#include <iostream>
using namespace std;

int main() {
    int A, B, aux;

    cin >> A >> B;

    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }

    if (A%B == 0) {
        cout << "Sao Multiplos" << endl; 
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}