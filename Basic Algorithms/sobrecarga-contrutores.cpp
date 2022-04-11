#include <iostream>
using namespace std;

class Carro {
public:
    int ano;
    double preco;

    Carro(){
        ano = 0;
        preco = 0.0;
    }
    Carro(int ano){
        this->ano = ano;
        this->preco = 0.0;
    }
    Carro(int ano, double preco){
        this->ano = ano;
        this->preco = preco;
    }
};

int main () {
    Carro carro;
    Carro carro2(2014);
    Carro carro3(2013, 20000);

    cout << "Preco do carro: " << carro.preco << endl;
    cout << "Preco do carro2: " << carro2.preco << endl;
    cout << "Preco do carro3: " << carro3.preco << endl;
    return 0;
}