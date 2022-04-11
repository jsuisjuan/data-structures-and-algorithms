#include <iostream>
using namespace std;

struct Dados
{
    string nome;
    float peso, altura;
};

Dados atletas[100] = {
    {"Juan", 60, 1.78},
    {"Ana", 90, 1.60},
    {"Henrique", 50, 1.75},
    {"Davi", 85, 1.80},
    {"Joao", 45, 1.67},
    {"Miguel", 128, 1.50},
    {"Pedro", 32, 1.40},
    {"Ana", 56, 1.68},
    {"Sophia", 78, 1.75},
    {"Gabriel", 100, 1.82},
    {"Alice", 90, 1.84},
    {"Júlia", 78, 1.84},
    {"Lucas", 45, 1.23},
    {"Laura", 90, 1.25},
    {"Enzo", 76, 1.67},
    {"Bernardo", 23, 1.10},
    {"Arthur", 49, 1.65},
    {"Rafael", 150, 1.79},
    {"Matheus", 18, 0.50},
    {"Heitor", 23, 0.78},
    {"Juan", 60, 1.78},
    {"Ana", 90, 1.60},
    {"Henrique", 50, 1.75},
    {"Davi", 85, 1.80},
    {"Joao", 45, 1.67},
    {"Miguel", 128, 1.50},
    {"Pedro", 32, 1.40},
    {"Ana", 56, 1.68},
    {"Sophia", 78, 1.75},
    {"Gabriel", 100, 1.82},
    {"Alice", 90, 1.84},
    {"Júlia", 78, 1.84},
    {"Lucas", 45, 1.23},
    {"Laura", 90, 1.25},
    {"Enzo", 76, 1.67},
    {"Bernardo", 23, 1.10},
    {"Arthur", 49, 1.65},
    {"Rafael", 150, 1.79},
    {"Matheus", 18, 0.50},
    {"Heitor", 23, 0.78},
    {"Juan", 60, 1.78},
    {"Ana", 90, 1.60},
    {"Henrique", 50, 1.75},
    {"Davi", 85, 1.80},
    {"Joao", 45, 1.67},
    {"Miguel", 128, 1.50},
    {"Pedro", 32, 1.40},
    {"Ana", 56, 1.68},
    {"Sophia", 78, 1.75},
    {"Gabriel", 100, 1.82},
    {"Alice", 90, 1.84},
    {"Júlia", 78, 1.84},
    {"Lucas", 45, 1.23},
    {"Laura", 90, 1.25},
    {"Enzo", 76, 1.67},
    {"Bernardo", 23, 1.10},
    {"Arthur", 49, 1.65},
    {"Rafael", 150, 1.79},
    {"Matheus", 18, 0.50},
    {"Heitor", 23, 0.78},
    {"Juan", 60, 1.78},
    {"Ana", 90, 1.60},
    {"Henrique", 50, 1.75},
    {"Davi", 85, 1.80},
    {"Joao", 45, 1.67},
    {"Miguel", 128, 1.50},
    {"Pedro", 32, 1.40},
    {"Ana", 56, 1.68},
    {"Sophia", 78, 1.75},
    {"Gabriel", 100, 1.82},
    {"Alice", 90, 1.84},
    {"Júlia", 78, 1.84},
    {"Lucas", 45, 1.23},
    {"Laura", 90, 1.25},
    {"Enzo", 76, 1.67},
    {"Bernardo", 23, 1.10},
    {"Arthur", 49, 1.65},
    {"Rafael", 150, 1.79},
    {"Matheus", 18, 0.50},
    {"Heitor", 23, 0.78},
    {"Juan", 60, 1.78},
    {"Ana", 90, 1.60},
    {"Henrique", 50, 1.75},
    {"Davi", 85, 1.80},
    {"Joao", 45, 1.67},
    {"Miguel", 128, 1.50},
    {"Pedro", 32, 1.40},
    {"Ana", 56, 1.68},
    {"Sophia", 78, 1.75},
    {"Gabriel", 100, 1.82},
    {"Alice", 90, 1.84},
    {"Júlia", 78, 1.84},
    {"Lucas", 45, 1.23},
    {"Laura", 90, 1.25},
    {"Enzo", 76, 1.67},
    {"Bernardo", 23, 1.10},
    {"Arthur", 49, 1.65},
    {"Rafael", 150, 1.79},
    {"Matheus", 18, 0.50},
    {"Heitor", 23, 0.78}
};

void imcCalculadora (Dados atletas[], int qt)
{
    float imc;
    for (int i = 0; i < 100; i++)
    {
        imc = atletas[i].peso / (atletas[i].altura*atletas[i].altura);
        cout << "================================================================" << endl;
        cout << "O IMC do atleta " << atletas[i].nome << " e: " << imc << "." << endl;
    }
}

int main ()
{  
    imcCalculadora (atletas, 100);
    return 0;
}

