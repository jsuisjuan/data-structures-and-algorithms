//Este módulo contém funções matemáticas

int fatorial (int numero) {
    int fatorial = 1;
    for (int i = 1; i < numero; i++)
        fatorial *= (i + 1);
    return fatorial;
}

int areaQuadrado (int lado) {
    return lado * lado;
}

int areaRetangulo (int lado, int base) {
    return lado * base;
}