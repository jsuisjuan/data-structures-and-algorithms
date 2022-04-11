#include <iostream>
using namespace std;

//questão 1

void average (float A[][4])
{
    int sum, average;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += A[i][j];
            average = sum / 4;
        }
        cout << "the average of the student " << i << " is: " << average << endl;
    }
}
int main ()
{
    float A[5][4] = {
        {4.5, 6, 6.4, 5},
        {2.5, 4, 5.6, 4},
        {7.5, 7, 8, 6.5},
        {0.5, 4, 8.5, 4},
        {3.5, 6.3, 9, 6.4}  
    };
    average (A);
    return 0;
}
