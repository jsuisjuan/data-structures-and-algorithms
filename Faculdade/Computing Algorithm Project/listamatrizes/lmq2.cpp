#include <iostream>
using namespace std;

//questão 2

void f (int vendas[][12], float preco[])
{
    int ano, mes, somaAno;

    for (ano = 0; ano < 6; ano++)
    {
        somaAno = 0;
        //cout << "vendas no ano " << 2010 + ano << endl;
        for (mes = 0; mes < 12; mes++)
        {
            somaAno += vendas[ano][mes];
            //cout << "vendas no mes " << mes + 1 << " " << vendas[ano][mes]<< endl;
        }
        cout << "vendas no ano " << 2010 + ano << " = " << somaAno * preco[ano] << endl;
    }
}
int main ()
{
    int vendas[6][12] = {
        {9, 9, 17, 6, 20, 17, 18, 6, 5, 13, 9, 12},
        {16, 6, 8, 10, 10, 5, 10, 14, 17, 15, 20, 9},
        {11, 20, 18, 20, 10, 19, 14, 11, 19, 16, 15, 13},
        {12, 11, 13, 16, 8, 11, 5, 15, 6, 5, 18, 7},
        {9, 10, 12, 16, 7, 13, 14, 10, 20, 9, 15, 17},
        {16, 9, 8, 8, 16, 14, 9, 16, 11, 20, 8, 13}
    };
    float preco[6] = {10000, 15000, 20000, 30000, 32000, 40000}; 

    f(vendas, preco);
    return 0;
}