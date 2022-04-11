// implemantação de uma fila utilizando templates

#include <iostream>
#include <list>
using namespace std;

template<class T>
class Fila {
private:
    list<T> fila;
public:
    void inserir(const T& e) {  // inserir elemento na fila
        fila.push_back(e);
    }
    bool vazia() {  // verificar se a fila está vazia
        return fila.empty();
    }
    T remover() {   // remover elemento da fila
        if (!this->vazia()) {
            T e = fila.front(); // recebe o elemento que será removido
            fila.pop_front();   // remove o elemento
            return e;
        }
        throw "Fila vazia!!";
    }
    T topo() {  // verificar o elemento que está no topo da fila
        if (!this->vazia()) 
            return fila.front();
        throw "Fila vazia!!";
    }
    T final() { // verificar o elemento que está no final da fila
        if (!this->vazia()) 
            return fila.back();
        throw "Fila vazia!!";
    }
    int tamanho() {
        return fila.size();
    }
};

int main () {
    Fila<double> f1;

    cout << "ANTES de inserir elementos...\n";
    if (f1.vazia())
        cout << "Fila vazia!!\n";
    else    
        cout << "Fila NAO vaiza!!\n";

    try {
        double e = f1.remover();
        cout << "Removido o elemento: " << e << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

//<----------------------------------------------------->

    f1.inserir(5.67);
    f1.inserir(9.23);
    f1.inserir(1.45);

    cout << "\nDEPOIS de inserir elementos...\n";
    if (f1.vazia())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NAO vazia!!\n";
    
    // verificando o elemento que está no TOPO da fila
    try {
        cout << "Elemento do topo: " << f1.topo() << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    // verificando o elemento que está no FINAL da fila
    try {
        cout << "Elemento do final: " << f1.final() << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    // removendo um elemento da fila
    try {
        double e = f1.remover();    // retornando o elemento removido
        cout << "Removido o elemento: " << e << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    // verificando o elemento que está no TOPO da fila NOVAMENTE
    try {
        cout << "Elemento do topo: " << f1.topo() << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    // inserindo uma fila de strings
    Fila<string> f2;
    
    f2.inserir("c++");
    f2.inserir("python");
    f2.inserir("ruby");
    cout << "\n\nFila de strings...\n";

    //verificando elemento que está no TOPO da fila string
    try {
        cout << "Elemento do topo: " << f2.topo() << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    //verificando elemento que está no FINAL da fila string
    try {
        cout << "Elemento do final: " << f2.final() << endl;
    } catch(const char* msg) {
        cerr << "Erro: " << msg << endl;
    }

    return 0;
}