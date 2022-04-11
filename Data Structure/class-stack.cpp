#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    // pilha: 10, 20, 30, 40

    cout << "Tamanho da pilha: " << pilha.size() << endl;
    
    while (!pilha.empty()) {
        int e = pilha.top();
        cout << e << " ";
        pilha.pop();
    }
    cout << endl;

    return 0;
}