#include <iostream>
using namespace std;

int main () {

    int valor[10];

    cin >> valor[0];

    for (int v = 1; v < 10; v++) {
        valor[v] = valor[v - 1] * 2;          
    }

    for (int v = 0; v < 10; v++) {
        cout << "N["<< v <<"] = "<< valor[v] << endl;      
    }

    return 0;
}