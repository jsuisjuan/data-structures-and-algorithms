#include <iostream>
using namespace std;

/*questão 6*/

int plusCalculator (int x, int y) {

    int plus;

    plus = x + y;

    return plus;
}

int averageCalculator (int a, int b) {

    int averageC;

    averageC = plusCalculator (a, b) / 2;

    cout <<"The first function average "<< a << " with " << b << " = " << averageC << endl;

    return averageC;  
}

int main () {

    int n1, n2, average;

    cin >> n1 >> n2;
    
    average = averageCalculator (n1, n2);

    cout << "The sum of " << n1 << " with " << n2 << " is = " << plusCalculator (n1, n2) << endl;

    cout <<"And the average of " << n1 << " with " << n2 << " is = " << average << endl;

    return 0;
}