#include <iostream> 

  

using namespace std; 

  

void imprimeComuns(int v1[], int n1, int v2[], int n2) 

{ 
    int i, j;
    cout << "Os elementos simultaneos sao: " << endl;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (v1[i] == v2[j])
            {
                cout << v2[j] << endl;
            }
        }
    }

} 

int main()  

{ 

    int v1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }; 

    int v2[] = { 2, 4, 6, 8, 10, 12, 11, 14 }; 

    imprimeComuns(v1, 11, v2, 8); 

    return 0; 

} 