#include <iostream>
using namespace std;

string letra[3] = { "Azul", "Vermelho", "Violeta"};
int g[20][20];

void imprimirMatriz(int);
int hierarquiaDecrescente(int);

int main(){
    int v = 3;
    int maior = 1;
    cout << "\n\tGrafo Representativo do Estudo de Cores" << endl;
    //Azul
    g[0][2] = 60;
    //Vermelho
    g[1][2] = 14;
    //Violeta
    g[2][0] = 60;
    g[2][1] = 14;
    g[2][2] = 100;
    imprimirMatriz(v);
    cout << " " << endl;
    cout << "Arestas de maior peso\n" << endl;
    while (maior != 0)
      maior = hierarquiaDecrescente(v);
    return 0;
}

void imprimirMatriz(int v){
    int i,j;
    cout << "\n\t Azul  Vermelho  Violeta" << endl;
    for(i=0;i<v;i++){ 
        switch (i){
        case 0: cout << "Azul     ";  break;
        case 1: cout << "Vermelho ";  break;
        case 2: cout << "Violeta  ";  break;
        }
        for(j=0;j<v;j++){
            if (g[i][j] < 10){
                cout << " ";
            } cout << g[i][j] << "\t  ";
        } cout << endl;    
    } 
}

int hierarquiaDecrescente(int v){
    int i,j,maior = 0;
    int k,n;
    for (i=0;i<v;i++){
        for(j=0;j<v;j++){
            if (maior ==  0 || g[i][j] > maior){
                maior = g[i][j];
                k = i;
                n = j;
            }
        } 
    }
    if (maior !=0)
      cout << "("<< letra[k] << " - " << letra[n] << ") = " << maior << endl;
    g[k][n] = 0;
    g[n][k] = 0;
    return maior;
}
