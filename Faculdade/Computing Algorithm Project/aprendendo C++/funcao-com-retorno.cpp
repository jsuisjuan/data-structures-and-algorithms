#include <iostream>
using namespace std;

//Learning Functions

//Function Generic Type

//type_of_return name_of_the_function (parameters listing) 
//{
//    instructions;
//    function_return;
//}

int multiplicatorMachine (int n1, int n2)
{
    int res;

    res = n1 * n2;

    return res;
}

int main () 
{
    int v1, v2, result;

    cout << "enter the first value: " << endl;
    cin >> v1;
    cout << "enter the second value: " << endl;
    cin >> v2;

    result = multiplicatorMachine(v1, v2);

    cout << "the result is: " << result << endl;

    return 0;
}