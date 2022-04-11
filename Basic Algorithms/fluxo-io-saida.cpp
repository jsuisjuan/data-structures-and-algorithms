// abrir um arquivo para saída

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream output("saida.txt");
    output << "AprendendoC++\n";
    output << "www.GeeksBR.com\n";
    return 0;
}