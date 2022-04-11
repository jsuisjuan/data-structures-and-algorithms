#include <stdio.h>
#define N 3

//irei resolver com char e formulário
//Uma empresa cadastrou a matrícula e o salário dos 15 funcionários para verifica algumas informações e listar:
//a. os salários em ordem decrescente.
//b. o somatório dos salários.
//c. a quantidade e a(s) matricula(s) dos(s) funcionário(s) que recebe(m) salário menor do que a média geral.

struct Dados 
{
    char nome[40];
    int matricula;
    float salario;
};

struct Dados registro[N] = {
    {"Juan", 202101, 8500},
    {"Sharon", 202102, 5600},
    {"Henrietta", 202103, 12500}
};

void getDecrescente ( struct Dados funcionario[], int qt) 
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
        printf("R$%2.f " ,funcionario[i].salario);
    printf("\n");
}

void getSoma(struct Dados funcionario[], int qt) 
{
    float sum = 0;

    for (int i = 0; i < N; i++)
        sum += funcionario[i].salario;

    printf("R$%2.f\n" ,sum);
}

void getMenosMedia(struct Dados funcionario[], int qt) 
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
            printf("Matricula: %d\n" ,funcionario[i].matricula);
            menor++;
        }
    }

    printf("\n");
    printf("Total de matriculas abaixo da media salarial: %2.f\n" ,menor);
}

int main ()
{
    struct Dados funcionario[N];

    printf("\n\tFormulario dos Funcionarios\n");
    
    printf("\nSalarios em Ordem Decrescente\n");
    getDecrescente(registro, N);
    
    printf("\nValor Total dos Salarios\n");
    getSoma(registro, N);
    
    printf("\nSalarios Abaixos da Media Salarial\n");
    getMenosMedia(registro, N);
    printf("\n");

    return 0;
}