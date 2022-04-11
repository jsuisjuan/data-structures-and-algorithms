#include <iostream>
using namespace std;

/*questão 3*/

int sumSalary (int totalEmployee)
{
    int i, j, registration, gender, female, male;
    float salary, sum;
    sum = 0;

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

        sum = sum + salary;
    }
    return sum;
}

int main ()
{
    int sum;
    sum = sumSalary (3);
    cout << "The total of all the salarys is R$ " << sum << "." << endl;
    return 0;
}