#include <iostream>
using namespace std;

struct Aluno
{
    string nome, situacao;
    float p1, p2, media;
};

Aluno registro[3] = {
    {"Juan","", 8, 7.5, 0},
    {"Ana","", 9, 8.5, 0},
    {"Henrique","", 5, 1.7, 0}
};

void situacaoMedia (Aluno registro[], int qt)
{
    string situacao;
    float media;
    if (situacao.size() <= 10)
   {
      for (int i = 0; i < 3; i++)
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
      situacaoMedia (registro, 3);  
   } else {
      cout << "O nome inseriado e maior que 40 caracteres!" << endl;
   }    
   return 0;
}