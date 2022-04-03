#include <iostream>
using namespace std;

int gerarID() {
    static int id = 0;
    return id++;
}

int main() {
    string nome;
    while (true) {
        cout << "Digite o nome da pessoa: ";
        cin >> nome;
        cout << "ID gerado para o usuario " << nome << ": " << gerarID() << endl;
    }
    return 0;
}