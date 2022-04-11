#include <iostream>
// Passagem de Parâmetro por referência -> &
// O que é passado não é o valor, e sim a variável.
void f(int& x) {
	x = x + 10;
	std::cout << "O Valor de X: " << x << std::endl;
}

// A sintaxe do & não funciona em C classico. Em C
// é preciso passar o endereço da variável.
// int* x, x é o endereço (memória) de uma variável inteira.
void g(int* x)
{
	*x = *x + 10;
	std::cout << "O Valor de X: " << *x << std::endl;
}

int main()
{
	int y = 20;
	std::cout << "O Valor de Y antes: " << y << std::endl;
	f(y);
	std::cout << "O Valor de Y depois de f: " << y << std::endl;
	g(&y); // O endereço da variável y. & na passagem do parametro é o endereço.
	std::cout << "O Valor de Y depois de g: " << y << std::endl;
}