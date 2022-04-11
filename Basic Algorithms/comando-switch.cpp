#include <iostream>
using namespace std;

/*
    Calculadora
    Operações permitidas:
    + -> adição
    - -> subtração
    * -> multiplicação
    / -> divisão
*/

int main () {
    int num1, num2, resultado;
    char operacao;
    float div;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite a operacao: ";
    cin >> operacao;

    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        cout << num1 << " " << operacao << " " << num2 << " = " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << num1 << " " << operacao << " " << num2 << " = " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << num1 << " " << operacao << " " << num2 << " = " << resultado << endl;
        break;
    case '/':
        if (num2 != 0){
            div = (float)num1 / num2;
            cout << num1 << " " << operacao << " " << num2 << " = " << div << endl;
        } else {
            cout << "Divisao por zero!" << endl;
        }
        break;
    
    default:
        cout << "Operacao inexistente!" << endl;
        break;
    } 

    return 0;
}