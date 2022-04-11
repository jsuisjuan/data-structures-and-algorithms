#include <iostream>
using namespace std;

int main () {

    int n = 0;

    while (n < 10) {
        
        n++;
        if (n == 8) continue;
        cout << n << endl;
    }
     while (n < 10) {
        
        n++;
        if (n == 8) break;
        cout << n << endl;
    }


    return 0;
}