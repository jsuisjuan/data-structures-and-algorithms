// abrir um arquivo para entrada
// ler o conteúdo desse arquivo

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in ("teste.txt");

    string texto;
    char c = in.get();
    texto.push_back(c);

    cout << "\nMostrando cada caractere:\n";
    while(in.good()){
        cout << c;
        c = in.get();
        texto.push_back(c);
    }

    cout << "\nMostrando a string:\n" << texto << endl;
    return 0;
}