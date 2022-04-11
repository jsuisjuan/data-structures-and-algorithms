#include <iostream>
using namespace std;

void ordena (string nomes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nomes[j] < nomes[i])   //colocar os nomes em oredem crescente
            {
                string aux = nomes[j];
                nomes[j] = nomes[i];
                nomes[i] = aux;
            }
        }
    }
}

int main ()
{
    string turma[] = {"Fulano", "Beltrano", "Siclano"};

    for (int i = 0; i < 3; i++)
    {
        cout << turma[i] << endl;
    }

    cout << "--------------------------" << endl;

    ordena (turma, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << turma[i] << endl;
    }

    string primeiroNome = "Juan";
    string segundoNome= "Caralho";
    string nomeCompleto = primeiroNome + " " + segundoNome;
    cout << nomeCompleto << endl;
    
    string valor1 = "1234";
    string valor2 = "5678";
    cout << valor1 + valor2 << endl;
    return 0;
}