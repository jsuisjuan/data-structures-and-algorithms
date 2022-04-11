#include <iostream>
using namespace std;

void pagarIPTU (int dia, int mes, int ano, float valor)
{
    int data;
    int data1, dia1, mes1, ano1;
    int data2, dia2, mes2, ano2;
    int data3, dia3, mes3, ano3;
    int data4, dia4, mes4, ano4;
    float cota;

    data = dia, mes, ano;
    data1 = dia1 = 7, mes1 = 8, ano1 = 2019;
    data2 = dia2 = 31, mes2 = 8, ano2 = 2019;
    data3 = dia3 = 28, mes3 = 9, ano3 = 2019;
    data4 = dia4 = 31, mes4 = 10, ano4 = 2019;
    
    if (mes <= mes1 && ano == 2019)
    {
        if (dia < dia1)
        {
            data < data1;
            cout << "Data Fora do Prazo." << endl;
        }
    }
    if (mes == mes1 && ano == 2019)
    {
        if (dia >= dia1)
        {
            data >= data1;
            cota = valor;
            cout << "O valor a ser pago sera de R$ "<< cota << endl;
        }
    }
    if (mes > mes2 && ano == 2019)
    {
        if (dia >= dia2 && dia < dia3)
        {
           data >= data2;
            cota = valor * 0.04;
            cota += valor;
            cout << "O valor a ser pago sera de R$ "<< cota << endl; 
        }       
    }
    if (mes >= mes3 && ano == 2019)
    {
        if (dia >= dia3 && dia < dia4)
        {
            data >= data3;
            cota = valor * 0.08;
            cota += valor;
            cout << "O valor a ser pago sera de R$ "<< cota << endl;
        }    
    }
    if (mes == mes4 && ano == 2019)
    {
        if (dia == dia4)
        {
            data = data4;
            cota = valor * 0.12;
            cota += valor;
            cout << "O valor a ser pago sera de R$ "<< cota << endl;
        }    
    }
    if (mes > mes4 || ano != 2019)
    {  
        data > data4;
        cout << "Data Fora do Prazo." << endl;
    }   
}

int main ()
{
    int d, m, a, iptu;
    float v;

    cout << "Bem-vindo a Prefeitura do Rio de Janeiro!" << endl;
    cout << "Insira uma dia(sem zeros): " << endl;
    cin >> d;
    cout << d << "/" << endl;
    cout << "Insira um mes(sem zeros): " << endl;
    cin >> m;
    cout << d << "/" << m << "/" << endl;
    cout << "Insira um ano: " << endl;
    cin >> a;
    cout << d << "/" << m << "/" << a << endl;
    cout << "Insira um valor: " << endl;
    cin >> v;
   
    pagarIPTU (d, m, a, v);
    return 0;
}