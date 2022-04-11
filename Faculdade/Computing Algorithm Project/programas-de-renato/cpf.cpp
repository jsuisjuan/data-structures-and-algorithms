#include <iostream>

int main() {
    int cpf, d0, d1, d2, d3, d4, d5, d6, d7, d8, dv1, dv2;
    
    cpf = 25844797;
    d0 = cpf % 10;  // 7
    cpf = cpf / 10; // 2584479
    d1 = cpf % 10; // 9
    cpf = cpf / 10; // 258447
    d2 = cpf % 10; // 7
    cpf = cpf / 10; // 25844
    d3 = cpf % 10; // 4
    cpf = cpf / 10; // 2584
    d4 = cpf % 10; // 4
    cpf = cpf / 10; // 258
    d5 = cpf % 10; // 8
    cpf = cpf / 10; // 25
    d6 = cpf % 10; // 5
    cpf = cpf / 10; // 2
    d7 = cpf % 10; // 2
    cpf = cpf / 10; // 0
    d8 = cpf % 10; // 0

    dv1 = (d0 * 9 + d1 * 8 + d2 * 7 + d3 * 6 + d4 * 5 + d5 * 4 + d6 * 3 + d7 * 2 + d8) % 11;
    if (dv1 == 10) {
        dv1 = 0;
    }
    dv2 = (dv1 * 9 + d0 * 8 + d1 * 7 + d2 * 6 + d3 * 5 + d4 * 4 + d5 * 3 + d6 * 2 + d7) % 11;
    if (dv2 == 10) {
        dv2 = 0;
    }
    std::cout << dv1 << dv2;
}