#include <iostream>
using namespace std;

/*questão 5*/

int departmentLargestSalary (int employees)
{
    int i, registration;
    float salary, largestSalary, sum, allsum, aux;

    for (i = 0; i < employees; i++)
    {
        cout << "What is your registration here?" << endl;
        cin >> registration;
        cout << "Now, what's your salary?" << endl;
        cin >> salary;
        if (i == 0 || salary > largestSalary)
        {
            largestSalary = salary;
        }
        sum = sum + salary;
        allsum = sum;
    }
    cout << "The largest salary in this department is R$ " << largestSalary << "." << endl;
    cout << "The sum of the salarys is R$ " << sum << endl;
    sum = 0;
    return allsum;
}

void departmentsAnalyze (int departments)
{
    int i, employees;
 
    cout << "Welcome to Microsoft! I'm Gordon." << endl;
    for (i = 0; i < departments; i++)
    {
        employees = departmentLargestSalary(2);
        employees += employees;
        
    }
    cout << "The sum of all the salarys in this company is R$ " << employees << endl;
}

int main ()
{
    int department;
    departmentsAnalyze (2);
    
    return 0;
}