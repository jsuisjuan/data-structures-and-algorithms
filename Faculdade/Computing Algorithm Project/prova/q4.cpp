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


int acharPrimo (int numero)
{
    int i,j, primo, maiord;
    cout << "Os numeros primos de 10 a 10000 sao:" << endl;
    for (i = 10; i <= numero; i++)
    {
        primo = 0;
        for (j = 1; j <= i; j++)
        {
            if(i % j == 0)
            primo++;   
        }
        if (primo == 2) 
        {
            cout << i << endl;
        }     
    }
    maiord = maiorDivisor (i);
    return i;
}

int main ()
{
    int divisor, primo;
    primo = acharPrimo (10000);
    return 0;
}
