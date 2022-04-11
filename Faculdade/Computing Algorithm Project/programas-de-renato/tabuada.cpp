#include <iostream>
using namespace std;

/*questão 1*/

void imprimeTabuada () 
{
    int i, j;
    for (i=1; i<=10; i++)
    {
        cout << "================================" <<endl;
        cout << "TABUADA DO " << i << endl;
        
        for (j=1; j<=10; j++)
        {
            cout << i << " x " << j << " = " << i*j << endl; 
        }
    } 
}
int main () 
{
    imprimeTabuada();
}