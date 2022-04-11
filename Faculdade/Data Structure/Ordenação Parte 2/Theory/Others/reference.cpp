#include <iostream>
using namespace std;

int main()
{
    int x = 13;

    int& ref = x;

    ref = 17;
    cout << "x = " << x << endl;

    x = 25;
    cout << "ref = " << ref << endl;
    
    return 0;
}