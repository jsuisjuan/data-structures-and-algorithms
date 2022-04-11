#include <iostream>
using namespace std;

/*Eu tentei resolver durante um bom tempo essa questão, mas
infelizmente eu não consegui fazer um algoritmo que encontrasse
o menor número acima da média. Só consegui achar os números acima
da média.*/

void acimaMedia (int vet[], int qt, int media)
{
    int menor = -1;
    cout << "Os numeros acima da media sao: ";
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] > media && (menor == -1 || vet[i] < vet[menor]))
        {
            menor = i;
        }
    }
    if (menor == -1)
    {
        cout << "Nenhum" << endl;
    } else {
        cout << vet[menor] << endl;
    }
}

int main ()
{
    int vet[5], soma, media, acima, menor;
    soma = 0;
    cout << "insira os numeros: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> vet[i];
        soma += vet[i];
    }
    media = soma / 5;
    acimaMedia(vet, 5, media);
    return 0;
}