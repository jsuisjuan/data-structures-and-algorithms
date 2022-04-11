#include <iostream>
using namespace std;

int fibonacci (int num)
{
    if (num <= 2)
        return 1;
    else
        return (fibonacci (num - 1) + fibonacci (num - 2));
}

int main ()
{
    int n;

    cout <<'\t'<< "Fibonacci" << endl;
    cout << endl;
    cout << "Entre com a quantidade de termos da sequencia: ";
    cin >> n;

    cout << "Sequencia Fibonacci: " << endl;
    for (int i = 0; i < n; i++)
        cout << fibonacci (i + 1) <<'\t';

    return 0;
}