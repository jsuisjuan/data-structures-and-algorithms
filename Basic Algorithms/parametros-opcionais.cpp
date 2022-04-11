#include <iostream>
using namespace std;

int quad(int num = 1){
    return num * num;
}

int main () {
    int num = 10;
    cout << "Quadrado: " << quad() << endl;
    return 0;
}