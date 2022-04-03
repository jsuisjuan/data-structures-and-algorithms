/*
    setw = set field width;
    função a qual atribui um campo de margem para ser
    utilizado ao imprimir um resultado
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    Pessoa(const string& nome, const int& idade) {
        this->nome.assign(nome);
        this->idade = idade;
    }
};

int main() {
    Pessoa p1("Maria da Silva", 20);
    Pessoa p2("Juan Carvalho", 13);
    Pessoa p3("Felipe Souza", 28);

    cout << setw(20) << "Nome da Pessoa" << setw(10) << "Idade" << endl;
    cout << setw(20) << p1.nome << setw(10) << p1.idade << endl;
    cout << setw(20) << p2.nome << setw(10) << p2.idade << endl;
    cout << setw(20) << p3.nome << setw(10) << p3.idade << endl;

    return 0;
}