#include <iostream>
using namespace std;

int grafo[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,0,1,1},
        {0,0,1,0,1},
        {0,0,1,1,0}
};

bool tem_ligacao(int v1, int v2) {
    if (grafo[v1][v2])
        return true;
    return false;
}

int main() {
    cout << tem_ligacao(1,2) << endl;

    return 0;
}