#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> fila;

    // inserindo na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);
    // fila: 10, 20, 30

    // mostrando o último elemento
    cout << "\nUltimo elemento: " << fila.back() << endl;

    if (fila.empty())
        cout << "\nFila vazia!!\n";
    else 
        cout << "\nFila NAO vazia!!\n";

    // mostrando o primeiro elemento
    cout << "\nPrimeiro elemento: " << fila.front() << endl;

    cout << "\nMostrando todos os elementos:\n";
    while (!fila.empty()) {
        int e = fila.front();
        cout << e << endl;
        fila.pop(); // remove elemento do início
    }

    // inserindo novamente na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout << "\n\nTamanho da fila: " << fila.size() << endl;
    
    return 0;
}