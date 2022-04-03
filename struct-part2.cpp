#include <iostream>
using namespace std;

struct Pessoa {
private:
    int idade;

public:
    Pessoa (int idade);
  
    int getIdade() {
        return idade;
    }
    void setIdade (int idade) {
        this->idade = idade;
    }
};

Pessoa::Pessoa (int idade) {
        this->idade = idade;
}

int main () {
    Pessoa p(20);
    
    cout << p.getIdade() << endl;
    return 0;
}