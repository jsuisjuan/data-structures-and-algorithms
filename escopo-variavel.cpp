#include <iostream>
using namespace std;

int numGlobal = 12;         

void foo () {
    int num = 10;           
    static int numStatic = 1;
    cout << "Variavel local: "<< num << endl;
    cout << "Variavel global: " << numGlobal << endl;
    numStatic++;
    cout << "Variavel estatica: " << numStatic << endl;
}

int main (int argc, char *argv[]) {
    foo();
    foo();
    foo();
    return 0;
}