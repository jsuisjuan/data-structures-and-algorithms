#include <iostream>
using namespace std;

/*questão 4*/

int sumSalary (int totalEmployee)
{
    int i, j, registration, gender, female, male;
    float salary, largestSalary;
    
    cout << "Welcome to IBM! My name's Sharon." << endl;
    for (i = 0; i < totalEmployee; i++)
    {
        cout << "What's your registration?" << endl;
        cin >> registration;
        cout << "What's your gender? Choose 1 for female or 2 for male." << endl;
        cin >> gender;
        if (gender == 1)
        {
            gender = female;
        }
        if (gender == 2)
        {
            gender = male;
        }
        cout << "What's your salary in this company?" << endl;
        cin >> salary;
        if (i == 0 || salary > largestSalary)
        {
            largestSalary = salary;
        }
    }
    return largestSalary;
}

int main ()
{
    int largest;
    largest = sumSalary (3);
    cout << "The largest salary is R$ " << largest << "." << endl;
    return 0;
}