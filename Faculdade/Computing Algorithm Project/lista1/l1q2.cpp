#include <iostream>
#include <cmath>
using namespace std;

/*questão 2*/

float failedStudentsPercentage (float total, float approved) 
{
    float failed;

    failed = total - approved;
    failed = (failed/total)*100;

    return failed;
}

int main () {

    float totalStudents, approvedStudents, failedStudents;

    cout << "Add the total number of students in the class: " <<endl;
    cin >> totalStudents;

    cout << "Now, add the number of approved students in the same class: " <<endl;
    cin >> approvedStudents;

    failedStudents = failedStudentsPercentage (totalStudents, approvedStudents);

    cout << "The percentage of failed students is = " << failedStudents << "%" << endl;

    return 0;
}