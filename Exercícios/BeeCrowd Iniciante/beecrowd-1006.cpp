// beecrowd | 1006: Média 2
// https://www.beecrowd.com.br/judge/pt/problems/view/1006

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, media;

    cin >> A >> B >> C;

    A *= 2;
    B *= 3;
    C *= 5;

    media = (A + B + C) / (2 + 3 + 5);

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}