// beecrowd | 1046: Tempo de Jogo
// https://www.beecrowd.com.br/judge/pt/problems/view/1046

#include <iostream>
using namespace std;

int main() {
    int horaInicial, horaFinal;
    int tempo = 0;

    cin >> horaInicial >> horaFinal;

    if (horaInicial < horaFinal) {
        tempo = horaFinal - horaInicial;
        cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    } else if (horaInicial > horaFinal) {
        tempo = 24 - (horaInicial - horaFinal);
        cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    } else if (horaInicial == horaFinal) {
        tempo = 24;
        cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    }
    
    return 0;
}