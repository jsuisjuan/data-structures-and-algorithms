#include <iostream>
#include <vector>
using namespace std;

class Ponto {
public:
    int x, y;

    Ponto(int x, int y){
        this->x = x;
        this->y = y;
    }
};

int main(){
    //vector<int> v(3);

    /*
    vector<int>::iterator it;

    cout << "primeiro elemento: " << *v.begin() << endl;
    cout << "ultimo elemento: " << *(--v.end()) << endl;

    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;   
    */

    /*
    vector<int>::reverse_iterator rit;
    int i = 0;
    for (rit = v.rbegin(); rit != v.rend(); rit++)
        *rit = ++i;
    
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    */

    /*
    if (v.empty())
        cout << "vetor vazio!!\n";
    else
        cout << "vetor NAO vazia!!\n";

    v.push_back(10);

    if (v.empty())
        cout << "vetor vazio!!\n";
    else
        cout << "vetor NAO vazio!!\n";
    */

    /*
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while(!v.empty())
        v.pop_back();
    if (v.empty())
        cout << "vetor vazio\n";
    else
        cout << "vetor NAO vazio\n";
    */

    /*
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.at(1) << endl;

    vector<int>::iterator it = v.begin();
    v.insert(it + 2, 40);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    */

    /* deletar elementos
    v.erase(v.begin() + 1);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    */

    /* mover de a para b: dar swap
    vector<int>a(2, 20);
    vector<int>b(3, 10);

    a.swap(b);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
    */

    /* limpar todo o vector
    vector<int> v(3, 10);

    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    */

    vector<Ponto*> vet;
    vector<Ponto*>::iterator it;

    Ponto* p1 = new Ponto(1, 2);
    Ponto* p2 = new Ponto(3, 4);

    vet.push_back(p1);
    vet.push_back(p2);

    for (it = vet.begin(); it != vet.end(); it++)
        cout << "(" << (*it)->x << ", " << (*it)->y << ")\n";
    
    return 0;
}