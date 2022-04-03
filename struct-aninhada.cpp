#include <iostream>
#include <string.h>
#include <string>
using namespace std;

// Struct Aninhada Externamente
typedef struct Curso {
    char nome[50];
    double preco;
} t_curso;

typedef struct Estudante {
    char nome[50];
    Curso curso;
} t_estudante;

// Struct Aninhada Internamente
typedef struct Pessoa {
    struct Carro {
        double preco;
    };
    struct Casa {
        double preco;
    };
    struct Carro carro;
    struct Casa casa;
} t_pessoa;

// Struct Aninhada com Ponteiros
typedef struct Universidade {
    string nome;
} t_universidade;

typedef struct Aluno {
    string nome;
    t_universidade universidade;
} t_aluno;

int main() {
    // Struct Aninhada Externamente Exemplo
    t_estudante e;

    strcpy(e.nome, "Pedro");
    strcpy(e.curso.nome, "C++ Intermediario");
    e.curso.preco = 10;

    cout << "Nome da pessoa: " << e.nome << endl;
    cout << "Curso: " << e.curso.nome << endl;
    cout << "Preco do curso: " << e.curso.preco << endl;
    cout << endl;

    // Struct Aninhada Internamente Exemplo
    t_pessoa pessoa;

    pessoa.carro.preco = 25000;
    pessoa.casa.preco = 200000;

    cout << "Preco do carro: " << pessoa.carro.preco << endl;
    cout << "Preco da casa: " << pessoa.casa.preco << endl;
    cout << endl;

    // Struct Aninhada com Ponteiros Exemplo
    t_aluno aluno = {"Juan", {"CEFET/RJ"}};
    t_aluno* ptr_aluno;

    ptr_aluno = &aluno;

    cout << "Aluno: " << ptr_aluno->nome << endl;
    cout << "Universidade: " << ptr_aluno->universidade.nome << endl;
    return 0;
}