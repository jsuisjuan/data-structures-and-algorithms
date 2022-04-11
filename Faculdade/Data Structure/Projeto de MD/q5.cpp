#include <iostream>
using namespace std;

void imprimirMatrix(int);
void hierarquiaDecrescente(int);
void hierarquiaCrescente(int);

int g[20][20];

int main(){
    int v = 13;
    
    g[0][1] = 10;
    g[0][2] = 18;
    g[0][3] = 12;

    g[1][0] = 10;
    g[1][2] = 19;
    g[1][4] = 39;

    g[2][0] = 18;
    g[2][1] = 19;
    g[2][5] = 4;
    g[2][6] = 1;
    g[2][7] = 2;
    g[2][3] = 20;

    g[3][0] = 12;
    g[3][2] = 20;
    g[3][8] = 8;

    g[4][1] = 39;
    g[4][5] = 10;
    g[4][9] = 12;

    g[5][4] = 10;
    g[5][2] = 4;
    g[5][6] = 1;
    g[5][10] = 3;

    g[6][5] = 1;
    g[6][2] = 1;
    g[6][7] = 7;
    g[6][10] = 1;

    g[7][6] = 1;
    g[7][2] = 2;
    g[7][8] = 7;
    g[7][10] = 2;

    g[8][7] = 7;
    g[8][3] = 8;
    g[8][11] = 20;

    g[9][4] = 12;
    g[9][10] = 9;
    g[9][12] = 13;

    g[10][9] = 9;
    g[10][5] = 3;
    g[10][6] = 1;
    g[10][7] = 2;
    g[10][11] = 10;
    g[10][12] = 15;

    g[11][10] = 10;
    g[11][8] = 20;
    g[11][12] = 14;

    g[12][9] = 13;
    g[12][10] = 15;
    g[12][11] = 14;
    imprimirMatrix(v);
    hierarquiaDecrescente(v);
    hierarquiaCrescente(v);
    return 0;
}

void imprimirMatrix(int v){
    int i,j;
    cout << "   A  B  C  D  R  S  T  U  V  X  Y  W  Z" << endl;
    for(i=0;i<v;i++){ 
        switch (i){
        case 0: cout << "A ";  break;
        case 1: cout << "B ";  break;
        case 2: cout << "C ";  break;
        case 3: cout << "D ";  break;
        case 4: cout << "R ";  break;
        case 5: cout << "S ";  break;
        case 6: cout << "T ";  break;
        case 7: cout << "U ";  break;
        case 8: cout << "V ";  break;
        case 9: cout << "X ";  break;
        case 10: cout << "Y "; break;
        case 11: cout << "W "; break;
        case 12: cout << "Z "; break;
        }
        for(j=0;j<v;j++){
            if (g[i][j] < 10){
                cout << " ";
            } cout << g[i][j] << " ";
        } cout << endl;    
    } 
}

void hierarquiaDecrescente(int v){
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
    } cout << "("<< k+1 << " - " << n+1 << ") = " << maior << endl;
}

void hierarquiaCrescente(int v){
    int i,j,menor = -1;
    int k,n;
    for (i=0;i<v;i++){
        for(j=0;j<v;j++){
            if (g[i][j] != 0){
                if (menor ==  -1 || g[i][j] < menor){
                    menor = g[i][j]; 
                    k = i;
                    n = j;
                }
            }  
        } 
    } cout << "("<< k+1 << " - " << n+1 << ") = " << menor << endl;
}

