// beecrowd | 1013: O Maior
// https://www.beecrowd.com.br/judge/pt/problems/view/1013

#include <iostream>
using namespace std;

int main() {
    int a, b, c, maior;
    
    cin >> a >> b >> c;

    if (a > b && a > c) {
        maior = a;
    } else if (b > c) {
        maior = b;
    } else {
        maior = c;
    }

    cout << maior << " eh o maior" << endl;
    
    return 0;
}