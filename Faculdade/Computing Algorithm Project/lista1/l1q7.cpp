#include <iostream>
using namespace std;

/*questão 7 */

int sumCalculator (int x, int y) 
{
    int sum;
    sum = x + y;
    cout << "The sum of " << x << " and " << y << " is = " << sum << endl;
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
    cin >> n1 >> n2;
    sumCalculator (n1, n2);
    averageCalculator (n1, n2);


    return 0;
}