#include <iostream>
using namespace std;

int main (void)
{
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    int i, qt;
    qt = 0;
    
    cout << "Exibindo os Valores do Vetor" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "notas["<< qt <<"] = " << notas[i] << endl;
        qt++;
    }
   
    return 0;
}