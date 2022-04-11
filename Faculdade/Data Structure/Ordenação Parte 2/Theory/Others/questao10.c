#include <stdio.h>
#define MAX 100
//questão 10

int main () {
    int x,y,C[MAX] = {0,1,2,3};
    int i = 1;

    printf("\nSeja um conjuto A = {0,1,2,3}\n");
    printf("AxA = {(0,0),(0,1),(0,2),(0,3),(1,0),(1,1),(1,2),(1,3),(2,0),(2,1),(2,2),(2,3),(3,0),(3,1),(3,2),(3,3)}\n");
    printf("R = {(x,y) e AxA|y = 2x + 1}\n");
    printf("\n");

    printf("Portanto, R = {");
    for(x = 0; x <= 3; x++) {
        for(y = 0; y <= 3; y++) {
            if(C[y] == (2*C[x])+1)
                printf("(%d,%d)",C[x],C[y]);
        }
    }
    printf("}");
    
    //reflexiva
    for(x = 0; x <= 3; x++) {
        for(y = 0; y <= 3; y++) {
            if(C[y] == (2*C[x])+1){
                if(C[x] == C[y])
                    printf("R% e reflexiva\n");
                else
                    printf("nao e reflexiva\n");
            }
        }
    }
    //simetrica
    for(x = 0; x <= 3; x++) {
        for(y = 0; y <= 3; y++) {
            if(C[y] == (2*C[x])+1){
                if(C[x]&&C[y]==C[y]&&C[x])
                    printf("e simetrica\n");
                else
                    printf("nao e simetrica\n");
            }
                
        }
    }
    //transitiva
    for(x = 0; x <= 3; x++) {
        for(y = 0; y <= 3; y++) {
            if(C[y] == (2*C[x])+1)
                if(C[x]&&C[y]==C[y])
        }
    }

    //Seja R uma relação binária no conjunto A.

    //R é reflexiva se, aRa
    //R é simétrica se, aRb -> bRa
    //R é transitiva se, aRb e bRc -> aRc

    return 0;
}