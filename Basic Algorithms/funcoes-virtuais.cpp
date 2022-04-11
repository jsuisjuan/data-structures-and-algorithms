#include <iostream>
using namespace std;

class ClasseMae {
public:
    virtual void mostrarMensagem(){
        cout << "Ola, sou a classe mae" << endl;
    }
};

class ClasseFilha : public ClasseMae {
public:
    virtual void mostrarMensagem(){
        cout << "Ola, sou a classe filha" << endl;
    }
};

void foo(ClasseMae* p){
    p->mostrarMensagem();
}

int main () {
    ClasseMae mae;
    ClasseFilha filha;

    //ligação pré-matura
    mae.mostrarMensagem();
    filha.mostrarMensagem();

    //ligação tardia
    foo(&mae);
    foo(&filha);
    return 0;
}