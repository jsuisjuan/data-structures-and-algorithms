#include <iostream>
using namespace std;

/*questão 9*/

int sumCalculator (int x, int y) 
{
    int sum;
    cin >> x >> y;
    sum = x + y;
    return sum;
}

void averageCalculator (int a, int b) 
{
    int average = sumCalculator (a, b) / 2;
    cout << "The average of " << a << " and " << b << " is = " << average << endl;
}

int main () 
{
    int n1, n2;
    sumCalculator (n1, n2);
    averageCalculator (n1, n2);
    return 0;
}