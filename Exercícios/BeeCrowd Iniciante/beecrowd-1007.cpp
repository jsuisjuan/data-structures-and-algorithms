// beecrowd | 1007: Diferença
// https://www.beecrowd.com.br/judge/pt/problems/view/1007

#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, diferenca;

    cin >> A >> B >> C >> D;

    diferenca = (A*B - C*D);

    cout << "DIFERENCA = " << diferenca << endl;
    
    return 0;
}