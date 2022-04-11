#include <iostream>
using namespace std;

int main ()
{
    string frase;

    cout << "Insira uma frase (max. de 40 caracteres): " << endl;
    getline(cin, frase);
    
    if (frase.size() <= 40)
    {
        cout << "================================================================" << endl;
        for (int i = frase.size() - 1; i >= 0; i--)
        {
            cout << frase[i];
        }
        cout << endl;
        } else {
            cout << "A frase inseriada e maior que 40 caracteres!" << endl;
        }
    return 0;
}