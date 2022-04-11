#include <iostream>
using namespace std;

struct Pessoa
{
    string nome;
    string endereco;
    string profissao;
    int idade;
    float peso;
};

/*struct Turma
{
    string nome;
    Pessoa professor;
    Pessoa alunos[50];
};

struct Escola
{
    string nome;
    Turma turmas [1000];
};*/

int main ()
{
    Pessoa p;

    getline(cin, p.nome);
    while (p.nome != "FIM")
    {
       getline (cin, p.endereco);
       cin >> p.idade;
       cin >> p.peso;
       getline (cin, p.profissao);
       if (p.idade > 38)
       {
           cout << p.nome << endl;
           cout << p.profissao << endl;
       }
       getline (cin, p.nome);
    } 
    return 0;
}