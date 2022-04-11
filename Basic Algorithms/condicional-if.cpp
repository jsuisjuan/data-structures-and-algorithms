#include <iostream>
using namespace std;

int main () {
    int dinheiro = 20;
    int n = 10;
    bool var1 = false;
    bool var2 = true;

    if (dinheiro >= 10)
        cout << "Eu vou ao cinema!" << endl;
    else
        cout << "Não vou ao cinema!" << endl;

    if ((n % 2 == 0) && n < 20)
        cout << "Numero par e menor do que 20." << endl;

    if (!var1 && var2)
        cout << "Apredemos c++" << endl;

    return 0;
}