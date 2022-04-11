#include <iostream>
using namespace std;

/*questão 10*/

float averageCalculator (float x, float y) 
{
    float average;
    average = (x + y) / 2;
    return average;
}

int main () 
{
    int registration;
    float n1, n2, t1, t2, finalAverage;

    cout << "Welcome to CEFET-RJ!" << endl;
    cout << "What is your registration?" << endl;
    cin >> registration;

    cout << "What were your grades in the first and second tests?" << endl;
    cin >> n1 >> n2;

    cout << "What were your grades in the first and second works?" << endl;
    cin >> t1 >> t2;

    cout << "Your registration is " << registration << "." << endl;
    cout << "The average of your tests is " << averageCalculator(n1, n2) << "." << endl;
    cout << "The average of your works is " << averageCalculator(t1, t2) << "." << endl;

    finalAverage = (averageCalculator(n1, n2) + averageCalculator(t1, t2)) / 2;
    cout << "Your final average is " << finalAverage << "." << endl;
    return 0;
}