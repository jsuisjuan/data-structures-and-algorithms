#include <iostream>
#include <string.h>
using namespace std;

//Acredito que o if(s[i] != ' ') não funciona porque 
//a função está lidando com char e não string!!!
int main ()
{
    char s[41];
    int qt = 0;
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9' && s[i] != ' ')
        {
            qt++;
        } 
    }
    cout << qt << endl;
    return 0;
}

