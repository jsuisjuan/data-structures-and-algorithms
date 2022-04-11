#include <iostream>
using namespace std;

void lerMatriz (int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> A[i][j];
        }
    }
}
bool triangularMatrizBaixo (int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {  
            if (A[i][j] != 0)
            return false;
        }
    }
    return true;
}
bool triangularMatrizCima (int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {  
            if (A[i][j] != 0)
            return false;
        }
    }
    return true;
}
int main ()
{
    int A[10][10], triangularbaixo, triangularcima;

    cout << "Insira a matriz: " << endl;
    lerMatriz(A);
    triangularcima = triangularMatrizCima(A);
    
    if (triangularcima == 1)
    {
        cout << "A matriz e triangular!" << endl;
    } 
    else if (triangularcima == 0)
    {
        triangularbaixo = triangularMatrizBaixo(A);

        if (triangularbaixo == 1)
        {
            cout << "A matriz e triangular!" << endl;
        } else 
        {
            cout << "A matriz nao e triangular!" << endl;
        }
    }
    return 0;
}