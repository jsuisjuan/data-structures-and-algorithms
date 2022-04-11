#include <iostream>
using namespace std;

int main () {
    string nome = "juan";
    
    if (isalpha(nome[0]))
        cout << "caractere alfabetico" << endl;
    else    
        cout << "caractere numerico" << endl;
    
    return 0;
}