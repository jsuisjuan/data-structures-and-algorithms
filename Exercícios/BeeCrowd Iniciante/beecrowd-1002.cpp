// beecrowd | 1002
// https://www.beecrowd.com.br/judge/pt/problems/view/1002

#include <iostream>
#include <iomanip>      // iomanip is a libary that is used
using namespace std;    // to manipulate the output of C++ program.

/*
    fixed = use fixed floating-point notation
    setprecision = it is used to set decimal precision
*/

int main() {
    double raio, area;
    double pi = 3.14159;

    cin >> raio;
    area = pi * (raio * raio);

    cout << "A="<< fixed << setprecision(4) << area << endl;

    return 0;
}