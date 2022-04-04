#include <iostream>
#include <set>
using namespace std;

int main() {
    int vet[] = {70,20,10,30,40};
    set<int> myset(vet, vet + 5);

    set<int>::iterator it = myset.begin();

    cout << "\nMostrando os elementos: ";
    while (it != myset.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //myset.clear();


    if (myset.empty())
        cout << "\n\nConjunto vazio!!\n";
    else    
        cout << "\n\nConjunto NAO vazio!!\n";
    
    // removendo elemento especifico
    it = myset.begin();
    myset.erase(it);

    // reatribuindo it como um ponteiro 
    // para o primeiro elemento
    it = myset.begin();
    cout << "\nMostrando os elementos: ";
    while (it != myset.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // procurando elementos
    it = myset.find(70);
    if (it == myset.end())
        cout << "\n\nO elemento 70 NAO existe\n";
    else
        cout << "\n\nO elemento 70 existe\n";

    cout << "\nTamanho do conjunto: " << myset.size() << endl;
    
    return 0;
}