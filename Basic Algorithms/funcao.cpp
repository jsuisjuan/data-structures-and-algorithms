#include <iostream>
using namespace std;

bool par(int num);

int main () {
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (par(num))
        cout << "O numero " << num << " e par!" << endl;
    else 
        cout << "O numero " << num << " e impar!" << endl;

    return 0;
}

bool par (int num){
    if (num % 2 == 0)
        return true;
    return false;
}