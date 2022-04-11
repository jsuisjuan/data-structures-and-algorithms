#include <stdio.h>
#define n 3

int main()
{
    int u[n], v[n], ip = 0;

    for(int k=0; k<n; k++)
    {
        ip+=u[k]*v[k];
    }
    
    return 0;
}