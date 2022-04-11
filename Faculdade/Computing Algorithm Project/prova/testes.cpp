#include <iostream>
using namespace std;

void somaSalario (int funcionarios)
{
    int i;
    float salario, soma;

    soma = 0;
    cout << "Bem vindo" << endl;
    for (i = 0; i < funcionarios; i++)
    {
        cout << "colocar salario" << endl;
        cin >> salario;
        soma = soma + salario;
    }
    cout << "soma do salario e " << soma << endl;
}

void encontrarMaiorSalario (int funcionarios)
{
    int i;
    float salario, maiorSalario;
   

    cout << "Bem vindo" << endl;
    for (i = 0; i < funcionarios; i++)
    {
        cout << "colocar salario" << endl;
        cin >> salario;
        if (i == 0 || salario > maiorSalario)
        {
            maiorSalario = salario;
        }
    }
    cout << "maior salario e " << maiorSalario << endl;
}

void encontrarMenorSalario (int funcionarios)
{
    int i;
    float salario, menorSalario;
    
    
    
    cout << "Bem vindo" << endl;
    for (i = 0; i < funcionarios; i++)
    {
        cout << "colocar salario" << endl;
        cin >> salario;
        
        if (i == 0 || salario < menorSalario)
        {
            menorSalario = salario;
        }
        
    }
    cout << "menor salario e " << menorSalario << endl;
}

void numerosPrimos (int numero)
{
    int i,j, primos;
    primos = 10;
    
    cout << "Os numeros primos são:" << endl;
    for (i = 10; i <= numero; i++)
    {
        for (j = 2; j < i; j++)
        {
           if (i % j == 0)
           {
               primos++;
               break;
           }
        }
        if (primos == 0 && i != 1)
            cout << i << endl;
            primos = 0;
    }
    
}

void prime(int num)

    {

        int primo=0;

        //checking for number of divisor

        for(int i=1;i<=num;i++)

        {

            if(num%i==0)

                primo++;                

        }

        //no divisors other than 1 and itself

        if(primo==2)

            cout<<num<<endl;

    }

int main ()
{
    cout << "Enter range:" << endl;   

        int lowerLimit, upperLimit;

        //user input

        cin>>lowerLimit>>upperLimit;

        cout<< "Prime numbers between "<<lowerLimit<<" and "<<upperLimit<< "are:" <<endl;

        //finding prime numbers in the given range

        for(int i=lowerLimit;i<=upperLimit;i++)

            prime(i);

    return 0;
}

void acharPrimo (int numero)
{
    int i,j, primo;
    primo = 0;
    for (i = 1; 1 <= numero; i++)
    {
        if(numero%i==0)
        {
            primo++;
        }
        if(primo==2)
        {
            cout<<numero<<endl;
        }
      
    }
    
}