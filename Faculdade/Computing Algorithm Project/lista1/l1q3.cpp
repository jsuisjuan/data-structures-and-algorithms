#include <iostream>
#include <cmath>
using namespace std;

/*questão 3*/

int averageCalculator (int n1, int n2, int n3) 
{
    int average;

    average = (n1 + n2 + n3) / 3;

    return average;
}

int main () {

    int a, b, c, average;

    cout << "Put three numbers here to make the average: " << endl;
    cin >> a >> b >> c;

    average = averageCalculator (a, b, c);

    cout << "The average of the numbers is = " << average << endl;

    return 0;
}