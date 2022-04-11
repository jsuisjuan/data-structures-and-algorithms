#include <iostream>
using namespace std;

int funcionariosAnalise (int funcionarios)
{
    int i, j, matricula, maiorMatricula, menorMatricula,test;
    float salario, soma, media, maiorSalario, menorSalario;
    soma =0;

    for (i = 0; i < funcionarios; i++)
    {
        cout << "Qual é a sua matricula?" << endl;
        cin >> matricula;
        
        cout << "Qual é o seu salario na nossa companhia?" << endl;
        cin >> salario;
        if (i == 0 || salario > maiorSalario)
        {
            maiorSalario = salario;
            maiorMatricula = matricula;
        } 
        if (i == 0 || salario < menorSalario)
        {
            menorSalario = salario;
            menorMatricula = matricula;
        }

        soma = soma + salario;
        media = soma / funcionarios;
    }
    cout << "O maior salario e de R$ " << maiorSalario << " por mes gerado pela matricula " << maiorMatricula << endl;
    cout << "O menor salario e de R$ " << menorSalario << " por mes gerado pela matricula " << menorMatricula << endl;
    cout << "A soma dos salarios e de R$ " << soma << " por mes." << endl;
    cout << "A media dos salarios e de R$ " << media << " por mes." << endl;
    return maiorSalario;
}   

int main ()
{ 
    int funcionarios;
    cout << "Bem-vindo a Companhia X!" << endl;
    cout << "Insira o numero de funcionarios:" << endl;
    cin >> funcionarios;
    funcionarios = funcionariosAnalise (funcionarios);
    return 0;
}

