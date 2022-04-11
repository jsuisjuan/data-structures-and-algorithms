#include <iostream>
using namespace std;

int maiorDivisor (int numero)
{
    int i,divisores, maior;
    divisores = 1;
   
    cout << "O maior divisor de "<< numero << " diferente dele proprio: " << endl;
    for (i = 1; i <= numero; i++)
    {
        if (numero % divisores == 0 && divisores != numero)
        {
            if (i == 1 || divisores > maior)
            {
                maior = divisores;
            }
        }
        divisores++;
    }
    cout << maior << endl;
    return maior;
}

int main ()
{
    int divisor;
    cout << "Entre com um numero: " << endl;
    cin >> divisor;
    divisor = maiorDivisor (divisor);
    return 0;
}