#include <iostream>
using namespace std;

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
void multiplica (int A[][3], int B[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
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

    multiplica (A, B, C);
    imprime (C);
    return 0;
}