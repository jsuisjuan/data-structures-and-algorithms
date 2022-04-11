#include <iostream>
using namespace std;

int main() {

    /*while (expressão lógica = valor booleano) {
        seu código que vai ser repetido 
    }  */


    int juan = 28;

    cout << "está fazendo dinheiro e curtido a vida" << endl;

    /* while (juan < 30) {

        juan++;
        cout << "juan não tem relacionamento " << juan << endl;

    }

    cout << "agora ele pode ter relacionamento" << endl;*/


    do {

        juan++;
        cout << "juan não tem relacionamento " << juan << endl;

    } while (juan < 30);

    return 0;
}