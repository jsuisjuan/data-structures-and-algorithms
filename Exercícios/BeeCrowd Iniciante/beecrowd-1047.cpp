// beecrowd | 1047: Tempo de Jogo com Minutos
// https://www.beecrowd.com.br/judge/pt/problems/view/1047

#include <iostream>
using namespace std;

int main() {
    int horaInicial, minutoInicial;
    int horaFinal, minutoFinal;
    int tempo;

    cin >> horaInicial >> minutoInicial;
    cin >> horaFinal >> minutoFinal;

    tempo = ((horaFinal*60)+minutoFinal)-((horaInicial*60)+minutoInicial);
    if (tempo <= 0) tempo += 24*60;
    cout << "O JOGO DUROU " << tempo/60 << " HORA(S) E " << tempo%60 << " MINUTO(S)" << endl;
    
    return 0;
}