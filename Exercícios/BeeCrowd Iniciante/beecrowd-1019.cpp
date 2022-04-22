// beecrowd | 1019: Conversão de Tempo
// https://www.beecrowd.com.br/judge/pt/problems/view/1019

#include <iostream>
using namespace std;

int main() {
    int N;
    // tempo em segundos
    cin >> N;
          // horas          //minutos            //segundos
    cout << N/3600 << ":" << (N%3600)/60 << ":" << N%60 << endl;

    return 0;
}