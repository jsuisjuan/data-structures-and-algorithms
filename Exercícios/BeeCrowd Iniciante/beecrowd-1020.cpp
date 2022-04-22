// beecrowd | 1020: Idade em Dias
// https://www.beecrowd.com.br/judge/pt/problems/view/1020

#include <iostream>
using namespace std;

int main() {
    int N;
    int ano, mes, dias;

    ano = 0;
    mes = 0;
    dias = 0;

    cin >> N;

    while (N >= 365) {
        N -= 365;
        ano++;
    } while (N >= 30) {
        N -= 30;
        mes++;
    } while (N > 0) {
        N--;
        dias++;
    } 
    
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    
    return 0;
}