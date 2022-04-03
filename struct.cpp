#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa {
    char nome[100];
    int idade;
}t_pessoa;

int main () {
    /*
    t_pessoa p[10];
    strcpy(p[0].nome, "marcos");
    p[0].idade = 26;

    strcpy(p[1].nome, "joao");
    p[1].idade = 30;

    cout << "Nome: " << p[0].nome << endl;
    cout << "Idade: " << p[0].idade << endl;

    cout << "Nome: " << p[1].nome << endl;
    cout << "idade: " << p[1].idade << endl;
    */
    t_pessoa pessoas[100];
    t_pessoa* p;

    p = &pessoas[0];

    pessoas[0].idade = 10;
    pessoas[1].idade = 11;
    pessoas[2].idade = 12;

    cout << p->idade << endl;
    cout << (p + 1)->idade << endl;
    cout << (p + 2)->idade << endl;

    return 0;
}