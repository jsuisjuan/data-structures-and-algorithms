// Union-find

#include <iostream>
#include <string.h>
using namespace std;

// função que busca o subconjunto de um elemento "v"
int busca(int subset[], int v) {
    if (subset[v] == -1)
        return v;
    return busca(subset, subset[v]);
}

// função para unir dois subconjuntos em um único elemento
void unir(int subset[], int v1, int v2) {
    int v1_set = busca(subset, v1);
    int v2_set = busca(subset, v2);

    subset[v1_set] = v2_set;
}

int tem_ciclo(int grafo[3][3]) {
    int* subset = (int*)malloc(3 * sizeof(int));

    // incializa todos os subconjuntos como conjuntos de um único elementos
    memset(subset, -1, sizeof(int) * 3);

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (grafo[i][j] == 1) {
                int v1 = busca(subset, i);
                int v2 = busca(subset, j);

                if (v1 == v2)
                    return 1;
                else
                unir(subset, v1, v2);
            } 
        }
    }
    return 0;
}
int main(){
    int grafo[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    grafo[0][1] = 1;
    grafo[1][0] = 1;
    grafo[1][2] = 1;
    grafo[2][1] = 1;
    grafo[0][2] = 1;
    grafo[2][0] = 1;

    if (tem_ciclo(grafo))
        cout << "O grafo tem ciclo!\n";
    else
        cout << "O grafo NAO tem ciclo!\n";

    return 0;
}