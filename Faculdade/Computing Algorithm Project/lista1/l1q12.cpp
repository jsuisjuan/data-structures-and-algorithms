#include <iostream>
using namespace std;

/*questão 12*/

void cashWithdrawal (int withdrawal)
{
    int one, two, five, ten, twenty, fifty, hundred;
    cin >> withdrawal;
    
    hundred = 0;
    while (withdrawal >= 100)
    {
        hundred++;
        withdrawal -= 100;
    }
    fifty = 0;
    while (withdrawal >= 50)
    {
        fifty++;
        withdrawal -= 50;
    }
    twenty = 0;
    while (withdrawal >= 20)
    {
        twenty++;
        withdrawal -= 20;
    }
    ten = 0;
    while (withdrawal >= 10)
    {
        ten++;
        withdrawal -= 10;
    }
    five = 0;
    while (withdrawal >= 5)
    {
        five++;
        withdrawal -= 5;
    }
    two = 0;
    while (withdrawal >= 2)
    {
        two++;
        withdrawal -= 2;
    }
    one = 0;
    while (withdrawal >= 1)
    {
        one++;
        withdrawal -= 1;
    }
    cout << withdrawal << " = " << hundred << " hundred, " << fifty << " fifty, " << twenty << " twenty, " << ten << " ten, " << five << " five, " << two << " two and " << one << " one." << endl;
}

int main ()
{
    int wwithdrawal;
    cashWithdrawal(wwithdrawal);
    return 0;
}