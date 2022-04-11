#include <iostream>
using namespace std;

int calculadorCDU (int cdu)
{
    int c, d, u, soma;
    
    u = cdu % 10; 
    cdu = cdu / 10;
    d = cdu % 10; 
    cdu = cdu / 10;
    c = cdu % 10; 

    soma = c + d + u;
    cout << "A soma dos algarismos e igual a " << soma << "." << endl;
    return soma;  
}

int main ()
{
    int numero;
    cout << "Insira o numero de 3 algarismos desejado." << endl;
    cin >> numero;
    numero = calculadorCDU (numero);
    return 0;
}