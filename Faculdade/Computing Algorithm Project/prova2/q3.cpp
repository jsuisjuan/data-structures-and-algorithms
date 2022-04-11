#include <iostream>
using namespace std;

int main ()
{
    string frase;
    int contador = 0;

    cout << "Insira uma frase (max. de 40 caracteres): " << endl;
    getline(cin, frase);
    if (frase.size() <= 40)
    {
        cout << "================================================================" << endl;
        for (int i = 0; i < frase.size(); i++)
        {
            if (frase[i] != ' ')
            {
                cout << contador << " ";
                contador++;
            } 
           
        } 
        cout << endl;
        cout << "================================================================" << endl;
        cout << "A quantidade de digitos informados nesta string e de "<< contador << " digitos!" << endl;
        cout << "================================================================" << endl;
    } else {
        cout << "================================================================" << endl;
        cout << "A frase inseriada e maior que 40 caracteres!" << endl;
    }
    return 0;
}