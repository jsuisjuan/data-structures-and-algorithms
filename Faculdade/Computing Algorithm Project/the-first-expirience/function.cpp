#include <iostream>
using namespace std;

int exemplo (int x, int y) {
    return x + y;
}
int main () {

    int a,b;
    a = 10;
    b = 20;

    cout << exemplo(a,b) <<endl;

    return 0;
}