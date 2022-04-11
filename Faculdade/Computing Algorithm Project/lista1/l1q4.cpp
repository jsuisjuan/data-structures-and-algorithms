#include <iostream>
using namespace std;

/*questão 4*/

float ponderedAverageCalculator (float n1, float n2) 
{
    float ponderedAverage;

    ponderedAverage = ((n1*2)+(n2*4)) / (2+4);

    return ponderedAverage;
}

int main () {

    float a, b, averageCalculator;

    cout << "What was your grade at the first test?" << endl;
    cin >> a;

    cout << "Now, What was your grade at the second test?" << endl;
    cin >> b;

    averageCalculator = ponderedAverageCalculator (a, b);

    cout << "The pondered average of your grades is = " << averageCalculator << "!" << endl;

    return 0;
}