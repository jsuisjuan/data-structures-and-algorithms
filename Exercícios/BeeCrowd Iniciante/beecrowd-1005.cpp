// beecrowd | 1005: Média 1
// https://www.beecrowd.com.br/judge/pt/problems/view/1005

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, media;

    cin >> A >> B;
    A *= 3.5;
    B *= 7.5;

    media = (A + B) / (3.5 + 7.5);
    cout <<"MEDIA = " << fixed << setprecision(5) << media << endl;

    return 0;
}