#include <iostream>
using namespace std;

void mergeReferencia (int arr[])
{
    cout << arr << endl;
}

void mergeValor(int arr)
{
    cout << arr << endl;
}

int main ()
{
    int arr[3] = {13, 15, 97};

    mergeReferencia(arr);
    mergeValor(arr[0]);
    
    return 0;
}