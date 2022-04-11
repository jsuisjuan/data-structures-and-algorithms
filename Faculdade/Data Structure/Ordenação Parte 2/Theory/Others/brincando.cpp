#include <iostream>
using namespace std;

short scale3(short x, short y, short z) {
    short t = 5*x+2*y+8*z;
    return t;
}

int main(){
    int x = 2, y = 2, z = 2, calculo;
    calculo = scale3(x,y,z);
    cout << calculo << endl;
    return 0;
}