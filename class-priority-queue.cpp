#include <iostream>
#include <queue>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    }
    string getNome() {
        return nome;
    }
    int getIdade() {
        return idade;
    }
};

struct CompIdade {
    bool operator()(Pessoa& p1, Pessoa& p2) {
        return p1.getIdade() < p2.getIdade();
    }
};

int main() {
    priority_queue<int> pq;

    /*
        OBS.:
        caso queira que a prioridade seja invertida,
        basta escrever o código abaixo:
        priority_queue<int, vector<int>, greater<int> > pq;
    */

    // inserindo elementos
    pq.push(20);
    pq.push(15);
    pq.push(50);

    // o elemento que está no topo é definido pelo,
    // qual apresenta maior prioridade: 50 [o maior]
    cout << "Elemento do topo: " << pq.top() << endl;

    if (pq.empty())
        cout << "\nFila vazia!!\n";
    else
        cout << "\nFila NAO vazia!!\n";
    
    // mostrando todos os elementos
    cout << "\nMostrando todos os elementos:" << endl;
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    // inserindo os elementos novamente
    pq.push(20);
    pq.push(15);
    pq.push(50);

    cout << "\nTamanho da fila: " << pq.size() << endl;

    // exemplo utilizando Class Pessoa
    priority_queue<Pessoa, vector<Pessoa>, CompIdade > pqPessoa;

    Pessoa p1("Joao", 40);
    Pessoa p2("Maria", 55);
    Pessoa p3("Pedro", 22);

    pqPessoa.push(p1);
    pqPessoa.push(p2);
    pqPessoa.push(p3);

    Pessoa pessoa_topo = pqPessoa.top();

    cout << "Nome: " << pessoa_topo.getNome() << endl;
    cout << "Idade: " << pessoa_topo.getIdade() << endl;
    
    return 0;
}