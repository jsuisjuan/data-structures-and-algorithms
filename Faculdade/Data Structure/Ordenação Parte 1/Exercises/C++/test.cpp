#include<iostream>
using namespace std;

int main(){
    int a, b;

    a = 3;
    b = 5;

    a = b - a;
    b = b - a;
    a = b + a;

    cout << a <<" " << b << endl;
    
    return 0;
}