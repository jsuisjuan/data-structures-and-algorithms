#include <iostream>
using namespace std;

int main () {
    char letter = 'A';
    cout << letter << endl;
    letter = 'B';
    cout << letter << endl;
    //end
    
    int age = 19;
    int x = 30;
    x = age;
    int example = 40;

    x = age = example;

    cout << "value of x "  << x << endl;
    cout << "value of age "  << age << endl;
    cout << "value of example " << example << endl;
    //end

    int marrage = 19 + 10;
    cout << marrage << endl;

    int varialve1 = 34;
    int varialve2 = 3;

    int rest = varialve1 % varialve2;
    float result = varialve1 / varialve2;

    cout << result << endl;
    cout << rest << endl;
    //end

    return 0;

}
