// beecrowd | 1049: Animal
// https://www.beecrowd.com.br/judge/pt/problems/view/1049

#include <iostream>
using namespace std;

int main() {
    string def1, def2, def3;

    cin >> def1 >> def2 >> def3;

    if (def1 == "vertebrado") {
        if (def2 == "ave") {
            if (def3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if(def3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (def2 == "mamifero") {
            if (def3 == "onivoro") {
                cout << "homem" << endl;
            } else if (def3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    }else if (def1 == "invertebrado") {
        if (def2 == "inseto"){
            if (def3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (def3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (def2 == "anelideo") {
            if (def3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (def3 == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}