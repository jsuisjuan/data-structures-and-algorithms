#include <iostream>
#include <string.h>
using namespace std;
#define MAX 10

class Carro {
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

// ordenação utilizando o algoritmo bubble sort
void ordena (Carro carros[], int tam) {
    Carro aux;

    for (int i = tam; i >= 0; i--)
        for (int j = 1; j <= i; j++) {
            if (strcmp(carros[j-1].nome, carros[j].nome) == 1) {
                aux = carros[j - 1];
                carros[j - 1] = carros[j];
                carros[j] = aux;
            }
        }
}

int main () {
    Carro carros[MAX];
    int i = 0;

    while (true) {
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite o preco: ";
        cin >> carros[i].preco;
        cout << "Voce deseja continuar? <S>SIM ou <N>NAO ";
        cin >> resp;
        if (resp != 'S')
            break;
        cout << endl;
        i++;
    }
    cout << endl;
    cout << "\tExibindo todos os carros:\n" << endl;
    for (int j = 0; j <= i; j++) {
        cout << "Nome do carro: " << carros[j].nome;
        cout << "\tPreco: R$" << carros[j].preco;
        cout << endl;
    }

    ordena(carros, i);
    cout << endl;
    cout << "\tExibindo os carros ordenados pelo nome:\n" << endl;
    for (int j = 0; j <= i; j++) {
        cout << "Nome do carro: " << carros[j].nome;
        cout << "\tPreco: R$" << carros[j].preco;
        cout << endl;
    }

    return 0;
}