// beecrowd | 1045: Tipos de Triângulos
// https://www.beecrowd.com.br/judge/pt/problems/view/1045

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A, B, C;
    double aux;

    do {
        cin >> A >> B >> C;
    } while (0 > A && 0 > B && 0 > C);

    if (B > A && B > C) {
        aux = B;
        B = A;
        A = aux;
    } 
    if (C > A && C > B) {
        aux = C;
        C = A;
        A = aux;
    } 
    
    if (A >= (B+C)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if ((pow(A,2)) == (pow(B,2)+(pow(C,2)))) {
            cout << "TRIANGULO RETANGULO" << endl;
        } if ((pow(A,2)) > ((pow(B,2))+(pow(C,2)))) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } if ((pow(A,2)) < ((pow(B,2))+(pow(C,2)))) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        } if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } if ((A == B && B != C)|| (B == C && C != A) || (C == A && A != B)) {
         cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}