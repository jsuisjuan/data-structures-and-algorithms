#include <iostream>
using namespace std;

/*questão 2*/

int employeeAnalyze (int totalEmployee)
{
    int i, qt, registration, gender, female, male;
    float salary;
    qt = 0;
    for (i = 1; i <= totalEmployee; i++)
    {
        cout << "Welcome to IBM! My name's Sharon." << endl;
        cout << "What's your registration?" << endl;
        cin >> registration;
        cout << "What's your gender? Choose 1 for female or 2 for male." << endl;
        cin >> gender;
        if (gender == 1)
        {
            gender = female;
            qt++;
        }
        if (gender == 2)
        {
            gender = male;
        }
        cout << "What's your salary in this company?" << endl;
        cin >> salary;
    }
    return qt;
}

int main ()
{
    int employeeFemale;
    employeeFemale = employeeAnalyze (3);
    cout << "The number of female employees is " << employeeFemale << endl;
    return 0;
}