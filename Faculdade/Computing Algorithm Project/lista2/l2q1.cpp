#include <iostream>
using namespace std;

/*questão 1*/

void multiplicationTable (int N)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

int main ()
{   
    int j;
    for (j = 1; j <=10; j++)
    {
        cout << "===========================" << endl;
        cout << "Multiplication Table of " << j << endl;
        multiplicationTable(j);
    }
    return 0;
}