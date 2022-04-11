#include <iostream>
#include <string>
using namespace std;

void showMessage(const char* str){
    cout << str << endl;
}

int main () {
    string str = "juan";
    cout << str << endl;
    //cout << str.length() << endl;
    //cout << str.at(2) << endl;
    //cout << str.back() << endl;

    str.append(" carvalho");
    cout << "Nome completo: " << str << endl;

    str.clear();
    if (str.empty())
        cout << "String vazia!!" << endl;
    else    
        cout << "String nao vazia!!" << endl;
    showMessage(str.c_str());

    string my_str;
    cout << "Digite seu nome: ";
    getline(cin, my_str);
    cout << "Nome digitado: " << my_str << endl;
    return 0;
}