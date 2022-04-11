#include <iostream>
using namespace std;

void mensagem (int n) {
    cout << "numero: " << n << endl;
}
void mensagem () {
    cout << "Hello World" << endl;
}

int soma (int n1, int n2) {
    return n1 + n2;
}
int soma (int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

int main () {
    mensagem(10);
    mensagem();

    cout << soma(1, 2) << endl;
    cout << soma(1, 2, 3) << endl;
    
    return 0;
}