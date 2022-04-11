#include <iostream>
#include <map>
using namespace std;

int main() {
    pair<int, string> pares[] = {
        make_pair(1, "pedro"),
        make_pair(2, "maria"),
        make_pair(3, "joao")
    };

    map<int, string> mapa(pares, pares + 3);

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    // também poderia ser assim
    map<int, string> mapa1;

    mapa1[1] = "joao";
    mapa1[2] = "maria";
    mapa1[3] = "pedro";

    cout << "\n" << mapa[2] << endl;

    // alterando o valor associado a uma chave
    mapa1.at(1) = "carol";
    cout << "\n" << mapa1[1] << endl;

    //mapa.clear();
    if (mapa.empty())
        cout << "Mapa vazio!!\n" << endl;
    else    
        cout << "Mapa NAO vazio!!\n" << endl;

    // verificar se exista um determinado elemento no mapa,
    // através da chave
    if (mapa.count(1) > 0)
        cout << "1 eh elemento do mapa\n";
    else    
        cout << "1 NAO eh elemento do mapa\n";

    // mostrando todos os elementos
    map<int, string>::iterator it;
    for (it = mapa.begin(); it != mapa.end(); it++)
        cout << "A chave " << it->first << " => " << it->second << endl;
    cout << endl;
    
    // removendo um elemento atráves da identificação de uma chave
    it = mapa.find(2);
    mapa.erase(it);
    for (it = mapa.begin(); it != mapa.end(); it++)
        cout << "A chave " << it->first << " => " << it->second << endl;

    // verificando se uma chave existe
    if (mapa.find(2) == mapa.end())
        cout << "\nChave 2 NAO existe!!\n\n";
    else
        cout << "\nChave 2 existe!\n";

    // inserindo um elemento através da chave
    it = mapa.begin();
    mapa.insert(pair<int, string>(2, "maria"));
    for (it = mapa.begin(); it != mapa.end(); it++)
        cout << "A chave " << it->first << " => " << it->second << endl;
    
    // utilizando multimap
    multimap<int, string> mm;

    mm.insert(pair<int, string>(1, "python 2"));
    mm.insert(pair<int, string>(2, "python 3"));
    mm.insert(pair<int, string>(3, "C"));
    mm.insert(pair<int, string>(4, "C++"));
    mm.insert(pair<int, string>(5, "ruby"));

    multimap<int, string>::iterator it_low, it_up, it2;

    it_low = mm.lower_bound(2);
    it_up = mm.upper_bound(4);

    for (it2 = it_low; it2 != it_up; it2++)
        cout << it2->first << " => " << it2->second << endl;
     
    return 0;
}