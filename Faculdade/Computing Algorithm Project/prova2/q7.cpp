#include <iostream>
using namespace std;

void menorComprimento (string name[], int qt)
{
    string menor = name[0];
    for (int i = 0; i < 4; i++)
    {
        if (name[i].length() < menor.length())
        {
            menor = name[i];
        }
    }
    cout <<"A menor string e "<< menor << "." << endl;
}

int main ()
{
    string name[4];

    cout << "Insira as strings: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> name[i];
    }
    menorComprimento(name, 4);
    return 0;
}