// beecrowd | 1040: Média 3
// https://www.beecrowd.com.br/judge/pt/problems/view/1040

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N1, N2, N3, N4, NR;
    double media;

    cin >> N1 >> N2 >> N3 >> N4;

    N1 *= 2;
    N2 *= 3;
    N3 *= 4;
    N4 *= 1;

    media = (N1+N2+N3+N4)/10.0;

    cout << "Media: " << fixed << setprecision(1) << media <<"\n";
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        cin >> NR;
        cout << "Nota do exame: " << fixed << setprecision(1) << NR << endl;
        if ((media+NR)/2 >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << (media+NR)/2 << endl;
    }
    
    return 0;
}