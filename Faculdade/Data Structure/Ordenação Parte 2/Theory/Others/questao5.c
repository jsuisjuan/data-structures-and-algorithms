#include <stdio.h>

int main(){
    //conjuntos A e B disjuntos
    int A[5] = {1,2,3,4,5};
    int B[4] = {6,7,8,9};
    int i, j, k, C[9];

    printf("\n\t\tUniao de Conjuntos Disjuntos\n");
    printf("\n");

    //implementação da união
    for (i = 0; i < 5; i++){
        C[i] = A[i];
    }
    for (j = 0; j < 4; j++){
        C[j+4] = B[j];
    }
    for (k = 0; k < 8; k++){
        printf("%d\t", C[k]);
    }

    return 0;
}