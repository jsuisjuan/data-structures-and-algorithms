#include <iostream>
using namespace std;

/*questão 2*/

void numberAnalyse (int vet[], int qt)
{
    int i;
    
    for (i = 0; i < qt; i++)
    {
        if (vet[i] / 2 == 0)
        {
            cout << vet[i] << endl;
            
        }
    }

}

int main ()
{
    int i, numbers[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Insert element " << i << ":" << endl;
        cin >> numbers[i];
    }
    cout << numbers[3] <<endl;
    return 0;
}