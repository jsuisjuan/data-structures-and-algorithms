#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
using namespace std;

class Individuo {
private:
    string classe;
    double a, b, c, d;
public:
    Individuo(double a, double b, double c, double d, string classe) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->classe = classe;
    }
    string getClasse() {
        return classe;
    }
    double getA() {
        return a;
    }
    double getB() {
        return b;
    }
    double getC() {
        return c;
    }
    double getD() {
        return d;
    }
};

double obterDistEuclidiana(Individuo ind1, Individuo ind2) {
    double soma = pow((ind1.getA() - ind2.getA()), 2) +
                  pow((ind1.getB() - ind2.getB()), 2) +
                  pow((ind1.getC() - ind2.getC()), 2) +
                  pow((ind1.getD() - ind2.getD()), 2);
    return sqrt(soma);
}

string classificarAmostra(vector<Individuo>& individuos, Individuo novo_exemplo, int K) {
    // se o K for par, decrementa
    if (K % 2 == 0) {
        K--;
        if (K <= 0)
            K = 1;
    }

    int tam_vet = individuos.size();

    
}
int main() {

    return 0;
}