#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    printf("\n\tImprimir 10 valores aleatorios\n");
    for (i = 0; i < 10; i++)
        printf("%d ",rand()%100);
        
    return 0;
}