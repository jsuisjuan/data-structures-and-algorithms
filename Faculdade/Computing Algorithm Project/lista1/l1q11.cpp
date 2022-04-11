#include <iostream>
using namespace std;

/*questão 11*/

void dayAnalyses (int day)
{
    int week = 0;
    cin >> day;
    while (day >= 7)
    {
        week++;
        day -= 7; 
    } 
    cout << "you have " << week << " weeks and " << day << " days to finish this." << endl;
}

int main ()
{
    int days;
    dayAnalyses(days);
    return 0;
}