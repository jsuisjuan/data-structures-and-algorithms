#include <iostream>
#include <exception>
#include <string.h>
using namespace std;

class ExcecaoCustomizada : public exception {
protected:
    char msg[100];
public:
    ExcecaoCustomizada(const char* erro){
        strcpy(msg, erro);
    }
    virtual const char* what(){
        return msg;
    }
};

int fat(int n){
    if(n < 0)
        throw ExcecaoCustomizada("Numero negativo!!");
    if(n == 0 || n == 1)
        return 1;
    return n * fat(n - 1);
}

int main(){
    try {
        cout << "Fatorial de 5: " << fat(5) << endl;
        cout << "Fatorial de -5: " << fat(-5) << endl;
    } catch(ExcecaoCustomizada erro) {
        cerr << "Erro: " << erro.what() << endl;
    } catch(...) {
        cerr << "Erro inesperado.\n";
    }
    return 0;
}