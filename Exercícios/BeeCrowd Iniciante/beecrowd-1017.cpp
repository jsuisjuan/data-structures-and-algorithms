// beecrowd | 1017: Gasto de Combustível
// https://www.beecrowd.com.br/judge/pt/problems/view/1017

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double litro, velocidadeMediaJoazinho = 12.00;
    int tempo, velocidadeMedia;

    cin >> tempo >> velocidadeMedia;
    
    litro = (velocidadeMedia * tempo) / velocidadeMediaJoazinho;

    cout << fixed << setprecision(3) << litro << endl;

    return 0;
}