#include <iostream>
using namespace std;

void ler (int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
}
void imprime (int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void soma (int A[][3], int B[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
int main ()
{
    int A[][3] = {
        {1, 2, 3},
        {1, 1, 2},
        {3, 2, 1}
    };
    int B[][3] = {
        {2, 3, 4},
        {1, 1, 0},
        {1, 2, 3}
    };
    int C[3][3];
    ler (C);
    //soma (A, B, C);
    imprime (C);
    return 0;
}