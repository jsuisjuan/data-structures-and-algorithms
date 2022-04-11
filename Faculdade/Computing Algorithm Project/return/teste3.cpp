#include <iostream> 
using namespace std; 

void ultimoNoFim (int vet[], int n )
{
    int i, numeroMaior, aux;
    for(i = 0; i < n; i++)
    { 
        if( i == 0 || vet[i] > vet[numeroMaior])
        { 
            numeroMaior = i; 
        }  
    }
    aux = vet[n - 1];
    vet[n -1] = vet[numeroMaior];
    vet[numeroMaior] = aux; 
}



 
int main()  
{ 
    int numeros[] = { 10, 20, 15, 75, 31, 47, 65, 24, 32 }; 
    int i;

    ultimoNoFim (numeros, 9); 
    for(i=0; i<9; i++) 
    { 
        cout << numeros[i] << endl; 
    } 
    return 0; 
} 