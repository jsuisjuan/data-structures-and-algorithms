#include <iostream>
using namespace std;

string letra[9] = { "CHN", "JPN", "THA", "USA", "CAN", "FRA", "DEU", "ITA", "BRA"};
int g[20][20];

void imprimirMatriz(int);
int hierarquiaCrescente(int);

int main(){
    int v = 9;
    int maior = 1;
    cout << "\n\tGrafo Representativo da Taxa de Propagacao Inicial da COVID-19" << endl;
    //CHN
    g[0][0] = 99;
    g[0][1] = 77;
    g[0][2] = 38;
    g[0][4] = 19;
    //JPN
    g[1][0] = 77;
    g[1][2] = 20;
    g[1][3] = 15;
    g[1][8] = 3;
    //THA
    g[2][0] = 38;
    g[2][1] = 20;
    g[2][8] = 1;
    //USA
    g[3][1] = 15;
    g[3][4] = 14;
    g[3][5] = 12;
    g[3][8] = 10;
    //CAN
    g[4][3] = 14;
    g[4][0] = 19;
    //FRA
    g[5][3] = 12;
    g[5][6] = 25;
    g[5][7] = 30;
    //DEU
    g[6][5] = 25;
    g[6][7] = 42;
    //ITA
    g[7][5] = 30;
    g[7][6] = 42;
    g[7][8] = 13;
    //BRA
    g[8][1] = 3;
    g[8][2] = 1;
    g[8][3] = 10;
    g[8][7] = 13;
    imprimirMatriz(v);
    cout << " " << endl;
    cout << "Arestas de menor peso\n" << endl;
    while (maior!= 0) 
      maior = hierarquiaCrescente(v);
    return 0;
}

void imprimirMatriz(int v){
    int i,j;
    cout << "\n    CHN JPN THA USA CAN FRA DEU ITA BRA" << endl;
    for(i=0;i<v;i++){ 
        switch (i){
        case 0: cout << "CHN ";  break;
        case 1: cout << "JPN ";  break;
        case 2: cout << "THA ";  break;
        case 3: cout << "USA ";  break;
        case 4: cout << "CAN ";  break;
        case 5: cout << "FRA ";  break;
        case 6: cout << "DEU ";  break;
        case 7: cout << "ITA ";  break;
        case 8: cout << "BRA ";  break;
        }
        for(j=0;j<v;j++){
            if (g[i][j] < 10){
                cout << " ";
            } cout << g[i][j] << "  ";
        } cout << endl;    
    } 
}
int hierarquiaCrescente(int v){
    int i,j,menor = 0;
    int k,n;
    for (i=0;i<v;i++){
        for(j=0;j<v;j++){
            if (g[i][j] != 0){
                if (menor ==  0 || g[i][j] < menor){
                    menor = g[i][j]; 
                    k = i;
                    n = j;
                }
            }  
        } 
    } 
    if (menor != 0) 
      cout << "("<< letra[k] << " - " << letra[n] << ") = " << menor << endl;
    g[k][n] = 0;
    g[n][k] = 0;
    return menor;
}