#include <iostream>
using namespace std;

bool verificaPalindromo (string palavra)
{
    int ultimaLetra = palavra.size() - 1;
    for (int i = 0; i <= ultimaLetra; i++)
    {
        if (palavra[i] != palavra[ultimaLetra - i])
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    string palavra;

    getline(cin, palavra);

    while (palavra != "FIM")
    {
        /*cout << palavra << ": ";
        if (verificaPalindromo (palavra))
        {
            cout << "SIM";
        }
        else{
            cout << "NAO";
        }
        cout << endl; */
        
        cout << palavra << ": ";
        cout << ( verificaPalindromo (palavra) ? "SIM" : "NAO" ) << endl;
        getline (cin, palavra);
    } 
  
    return 0;
}