#include <iostream>
using namespace std;

int main ()
{
    int numero, menor = -1;
    for (int i = 0; i < 3; i++)
    {
        cin >> numero;
        if (menor == -1 || numero < menor)
        {
            menor = numero;
        }
    }
    cout << menor << endl;
    return 0;
}