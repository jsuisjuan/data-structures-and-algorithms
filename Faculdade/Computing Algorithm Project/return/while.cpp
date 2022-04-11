#include <iostream>
using namespace std;

void exemplo1 () {
    int numero;
    cin >> numero;
    while (numero !=10) {
        cout << "Você Errou! Tente novamente." << endl;
        cin >> numero; 
    }
    cout << "Parabéns! Você Acertou!" << endl;
}

void exemplo2 () {
    int contador;
    contador = 1;
    while(contador <= 10) {
        cout << "Hello World" << endl;
        contador++;
    }
}

void exemplo3 () {
    int i, N;
    cout << "Quantas vezes voce quer contar?" << endl;
    cin >> N;
    /*i = 0;
    while(i < N) {
        cout << "Hello World" << endl;
        i++;
    }*/
    for (i = 0; i < N; i++) {
        cout << "Hello World" << endl;
    }
}

void exemplo4 () {
    int i, n , maior;
    for (i = 0; i < 10; i++){
        cin >> n;
        if (i==0|| n> maior){
            maior = n;
        }
    }
    cout << maior;
}

void exemplo5 () {
    int i, n, s;
    s=0;
    for (i = 0; i < 5; i++) {
        cin >> n;
        s += n;
    }
    cout << s/5 << endl;
}

int mdc (int a, int b) {
    if (a < b) {
        int aux = a;
        a = b;
        b = aux; 
    }
    int resto;
    resto = a % b;
    while (resto != 0) {
        a = b;
        b = resto;
        resto = a % b;
    }
    return b;
}

void imprimeFracaoReduzida (int n, int d) {
    int m = mdc(n,d);
    cout << n/m << "/" << d/m << endl;
}

void imprimeSomaFracao(int n1, int d1, int n2, int d2) {
    int n = (n1 * d2) + (n2 * d1);
    int d = d1 * d2;
    imprimeFracaoReduzida(n, d);
}

int fatorial (int n) {
    int i, resp = 1;
    for (i = n; i >= 1; i--) {
        resp = resp * i;
    }
    return resp;
}
int fatorialWhile (int n) {
    int i, resp = 1;
    i = n;
    while (i >= 1) {
        resp = resp * i;
        i--;
    }
    return resp;
}

int fat (int n) {
    if (n==0) {
        return 1;
    } else {
        return n*fat(n-1);
    }
}


int main () {
   cout << fat(5) << endl;
}