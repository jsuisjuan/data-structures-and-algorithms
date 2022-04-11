#include <iostream>
using namespace std;

struct Aluno
{
    string nome, situacao;
    float p1, p2, media;
};

int main ()
{
    Aluno estudante, condicao;
    
    if (estudante.nome.size() <= 40 && condicao.situacao.size() <= 10)
    {
        //código...
        
    } else {
        cout << "O nome/situação inseriados são maiores que 40/10 caracteres!" << endl;
    }    
    return 0;
}