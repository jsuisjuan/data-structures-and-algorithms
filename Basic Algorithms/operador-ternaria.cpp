#include <iostream>
using namespace std;

/*
operador ternário ?:
<condicao> ? <operacao 1> : <operacao 2>;
*/

int main () {
    int num = 10;

    if (num > 10)
        cout << "Numero maior que 10" << endl;
    else
        cout << "Numero menor ou igual a 10" << endl;
    
    num > 10 ? cout << "maior" : cout << "menor ou igual";
    return 0;
}