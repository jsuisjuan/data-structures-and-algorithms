#include <stdio.h>

void getHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
       printf("Move disk 1 from rod %c to rod %c\n" ,from_rod,to_rod);
       return;
    }
    getHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n" ,n,from_rod,to_rod);
    getHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main ()
{
    int n = 4;

    printf("\n\tTorre de Hanoi\n");
    getHanoi(n, 'A', 'C', 'B');

    return 0;
}