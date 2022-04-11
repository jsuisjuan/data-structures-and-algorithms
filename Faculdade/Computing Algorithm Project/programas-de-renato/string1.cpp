#include <iostream>
using namespace std;

int main ()
{
    char letra; //one 'char'acter
    string name;
    int i, idade;

    cout << "entre com o seu nome:" << endl;
    getline(cin, name);

    cout << "entre com a sua idade:" << endl;
    cin >> idade;

    cout << name << " tem " << idade << " anos." << endl;

    cout << "as letras do nome são:" << endl;

    for (i = 0; i < name.size(); i++)
    {
        cout << name[i] << endl;
    }

    for (i = name.size() - 1; i >= 0; i--)
    {
        cout << name[i] << endl;
    }
    return 0;
}