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

void transpostaMatriz (int A[10][10])
{
    int transposta[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            transposta[j][i] = A[i][j];
        }
    }
}

void imprimeTranspostaMatriz (int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}

bool simetricaMatriz (int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[i][j] != A[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int main ()
{
    int A[10][10], simetrica;

    cout << "Escreva a matriz:" << endl;
    lerMatriz(A);

    cout << "=====================" << endl;
    cout << "Matriz Transposta" << endl;
    imprimeTranspostaMatriz(A);

    cout << "=====================" << endl;
    simetrica = simetricaMatriz(A);
    if (simetrica == 0)
    {
        cout << "A matriz nao e simetrica!" << endl;
    } 
    if (simetrica == 1) 
    {
        cout << "A matriz e simetrica!" << endl;
    }
    return 0;
}