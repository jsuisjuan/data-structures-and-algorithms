#include <iostream>
using namespace std;

int main () {

    int age = 50;

    switch (age)
    {
    case 20: 
        cout << "you have 20 years old" << endl;
        break;
    case 50:
        cout << "you have 50 years old" << endl;
        break;
    
    default:
        cout << "we aren't know how old are you" << endl;
        break;
    }

    return 0;
}