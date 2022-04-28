// beecrowd | 1061: Tempo de um Evento
// https://www.beecrowd.com.br/judge/pt/problems/view/1061

#include <iostream>
using namespace std;

int main() {
    string temp;
    int h, hh, hr, m, mm, d, dm, s, ss;
 
    cin >> temp >> d;                       // Dia X
    cin >> h >> temp >> m >> temp >> s;     // h:m:s
    cin >> temp >> dm;                      // Dia Y
    cin >> hh >> temp >> mm >> temp >> ss;  // hh:mm:ss

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dm - d;

    if (s < 0) {
        s += 60;
        m--;
    } if (m < 0) {
        m += 60;
        h--;
    } if (h < 0) {
        h += 24;
        d--;
    }

    cout << d << " dia(s)" << endl;
    cout << h<< " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;

    return 0;
}