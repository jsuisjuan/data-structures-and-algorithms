#include <iostream>
using namespace std;
#define N 3

//irei resolver com char e formulário
//Uma empresa cadastrou a matrícula e o salário dos 15 funcionários para verifica algumas informações e listar:
//a. os salários em ordem decrescente.
//b. o somatório dos salários.
//c. a quantidade e a(s) matricula(s) dos(s) funcionário(s) que recebe(m) salário menor do que a média geral.

struct Dados 
{
    string nome;
    int matricula;
    float salario;
};

Dados registro[N] = {
    {"Juan", 202101, 8500},
    {"Sharon", 202102, 5600},
    {"Henrietta", 202103, 12500}
};

void getDecrescente (Dados funcionario[], int qt) 
{
    float aux;

    for (int i = 0; i < N - 1; i++) 
        for (int j = i + 1; j < N; j++) 
            if (funcionario[i].salario < funcionario[j].salario) {
                aux = funcionario[i].salario;
                funcionario[i].salario = funcionario[j].salario;
                funcionario[j].salario = aux;
            }
    
    for (int i = 0; i < N; i++) 
        cout << "R$" << funcionario[i].salario << " ";
    cout << endl;
}

void getSoma(Dados funcionario[], int qt) 
{
    float sum = 0;

    for (int i = 0; i < N; i++)
        sum += funcionario[i].salario;

    cout << "R$" << sum << endl;
}

void getMenosMedia(Dados funcionario[], int qt) 
{
    float sum, menor, media;

    sum = 0;
    media = 0;

    for (int i = 0; i < N; i++) {
        sum += funcionario[i].salario;
    }

    media = sum / qt;
    
    for (int i = 0; i < N; i++) {
        if (funcionario[i].salario < media) {
            cout << "Matricula: "<< funcionario[i].matricula << endl;
            menor++;
        }
    }

    cout << endl;
    cout << "Total de matriculas abaixo da media salarial: "<< menor << endl;
}

int main ()
{
    Dados funcionario[N];

    cout <<'\t'<< "Formulario dos Funcionarios" << endl;
    cout << endl;

    cout << "Salarios em Ordem Decrescente" << endl;
    getDecrescente(registro, N);
    cout << endl;

    cout << "Valor Total dos Salarios" << endl;
    getSoma(registro, N);
    cout << endl;

    cout << "Salarios Abaixo da Media Salarial" << endl;
    getMenosMedia(registro, N);
    cout << endl;

    return 0;
}