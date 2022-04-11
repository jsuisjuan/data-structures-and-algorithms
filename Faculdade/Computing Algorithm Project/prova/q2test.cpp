#include <iostream>
using namespace std;

void pagarIPTU (int dia, int mes, int ano)
{
    int i,j, cota, data, data1, data2, data3, data4;
    float valor;
    data = dia, mes, ano;
    data1 = 7, 8, 2019;
    data2 = 31, 8, 2019;
    data3 = 28, 9, 2019;
    data4 = 31, 10, 2019;
    data1<data2<data3<data4;
    cout << "Entre com um valor: " << endl;
    cin >> valor;

    
    for (i = 1; i <= 12; i++)
    {
        for (j = 1; j <= 31; j++)
        {
            if (data < data1)
            {
                cout << "data fora do periodo" << endl;
        
            }
            if (data >= data1)
            {
                cout << "cota 0%" << endl;

            }
            if (data >= data2)
            {
                cota = valor * 0.04;
                cota += valor;
                cout << "vc vai pagar "<< cota << endl;
                
            }
            if (data >= data3)
            {
            cota = valor * 0.08;
            cota += valor;
            cout << "vc vai pagar "<< cota << endl;
            
            }
            if (data = data4)
            {
            cota = valor * 0.12;
            cota += valor;
            cout << "vc vai pagar "<< cota << endl;
            
            }
            if (data > data4)
            {
                cout << "data fora do periodo" << endl;
            }                



        }
    }
    
    

}

int main ()
{
    int d, m, a, iptu;
    float v;

    cout << "Entre com um dia(sem zeros): " << endl;
    cin >> d;
    cout << d << "/" << endl;
    cout << "Entre com um mes(sem zeros): " << endl;
    cin >> m;
    cout << d << "/" << m << "/" << endl;
    cout << "Entre com um ano: " << endl;
    cin >> a;
    cout << d << "/" << m << "/" << a << endl;
   
    pagarIPTU (d, m, a);
    return 0;
}