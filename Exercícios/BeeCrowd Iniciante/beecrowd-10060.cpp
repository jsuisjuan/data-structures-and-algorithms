// beecrowd | 1060: Números Positivos
// https://www.beecrowd.com.br/judge/pt/problems/view/1060

#include <iostream>
using namespace std;

int main() {
    double numeros[6];
    int contador = 0;
    
    for (int i = 0; i < 6; i++){
        cin >> numeros[i];
        if (numeros[i] != 0 && numeros[i] > 0) {
            contador++;
        }
    }
    cout << contador << " valores positivos" << endl;
   
    return 0;
}