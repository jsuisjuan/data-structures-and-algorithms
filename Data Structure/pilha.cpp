#include <iostream>
using namespace std;

class Pilha {
private:
    int* vet;
    int max_tam;
    int topo;
public:
    Pilha(int tam){
        vet = new int[tam];
        max_tam = tam - 1;
        topo = -1;
    }
    ~Pilha(){
        delete[] vet;
    }
    void empilhar(int e){
        if (topo == max_tam)
            cout << "Pilha cheia!" << endl;
        else
            vet[++topo] = e;
    }
    void desempilhar(){
        if (topo == -1)
            cout << "Pilha vazia!!" << endl;
        else
            topo--;
    }
    int getTopo(){
        if (topo != -1)
            return vet[topo]; 
        return -1;
    }
    int vazia(){
        return (topo == -1);
    }
};

int main () {
    Pilha p;

    p.empilhar(11);
    p.empilhar(13);
    p.empilhar(8);

    p.desempilhar();
    cout << "Pilha vazia: " << p.vazia() << endl;
    cout << "Topo: " << p.getTopo() << endl;

    return 0;
}