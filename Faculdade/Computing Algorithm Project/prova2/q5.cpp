#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    float p1, p2;
};

Aluno registro[100] = {
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8},
    {"Juan", 8, 7.5},
    {"Ana", 9, 8.5},
    {"Henrique", 5, 1.7},
    {"Davi", 8.5, 1.8},
    {"Joao", 4.5, 6.7},
    {"Miguel", 2.8, 5},
    {"Pedro", 3.2, 4},
    {"Ana", 5.6, 6.8},
    {"Sophia", 7.8, 7.5},
    {"Gabriel", 10, 1.8}
};

void situacaoMedia (Aluno registro[], int qt)
{
    string situacao;
    float media;
    if (situacao.size() <= 10)
   {
      for (int i = 0; i < 100; i++)
    {
        media = (registro[i].p1 + registro[i].p2) / 2;
        if (media > 6)
        {
            situacao = "APROVADO!";
        } else {
            situacao = "REPROVADO!";
        }
        cout << "======================================================" << endl;
        cout << "A media de " << registro[i].nome << " e = " << media <<". Portanto esta "<< situacao << endl;
    }       
   }
   else 
   {
      cout << "A situação inseriada e maior que 10 caracteres!" << endl;
   } 
    
}

int main ()
{
   Aluno estudante;
  
   if (estudante.nome.size() <= 40)
   {
      situacaoMedia (registro, 100);  
   } else {
      cout << "O nome inseriado e maior que 40 caracteres!" << endl;
   }    
   return 0;
}