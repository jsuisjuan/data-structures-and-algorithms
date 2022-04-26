// beecrowd | 1038: Lanche
// https://www.beecrowd.com.br/judge/pt/problems/view/1038

#include <iostream>
#include <iomanip>
using namespace std;

struct lanche {
    int codigo;
    string especificacao;
    double preco;
} typedef lanche;

int main() {
    int pedido, quantidade;
    lanche lanches [] = {
        {1, "Cachorro Quente", 4.00},
        {2, "X-Salada", 4.50},
        {3, "X-Bacon", 5.00},
        {4, "Torrada simples", 2.00},
        {5, "Refrigerante", 1.50}
    };

    cin >> pedido >> quantidade;

    cout << "Total: R$ " << fixed << setprecision(2) << lanches[pedido-1].preco*quantidade<< endl;

    return 0;
}

/* --> Um exemplo mais simples, sem struct
    int main() {
        int a, b;
        float valor;

        std::cin >> a >> b;

        if (a == 1) valor = 4.00*b;
        else if (a == 2) valor = 4.50*b;
        else if (a == 3) valor = 5.00*b;
        else if (a == 4) valor = 2.00*b;
        else if (a == 5) valor = 1.50*b;

        printf("Total: R$ %.2fn", valor);
        return 0
    }
*/