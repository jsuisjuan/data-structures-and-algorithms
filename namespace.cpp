#include <iostream>

namespace ns1 {
    int num = 42;
    class A {
    public:
        void imprimir() {
            std::cout << "Ola, sou a classe A do namespace ns1\n";
        }
    };
}

namespace ns2 {
    int num = 52;
    class A {
    public:
        void imprimir() {
            std::cout << "Ola, sou a classe A do namespace ns2\n";
        }
    };
}

int main() {
    std::cout << ns1::num << std::endl;

    ns1::A ns1A;
    ns2::A ns2A;

    ns1A.imprimir();
    ns2A.imprimir();
    
    return 0;
}