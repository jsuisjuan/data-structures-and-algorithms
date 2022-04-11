#include <iostream>
using namespace std;

int main () {

    int vetor [10]; 

    for (int i = 0; i < 10; i++) {
        vetor [i] = i + 100;
    }

    cout << vetor [0] << endl;
    cout << vetor [4] << endl;
    cout << vetor [9] << endl;


    return 0;
}