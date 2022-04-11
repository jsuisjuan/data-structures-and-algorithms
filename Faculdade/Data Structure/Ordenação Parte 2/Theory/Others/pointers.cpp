#include <iostream>
using namespace std;

//Pointers
//data_type *pointer_name
//int *ptr;---Points to integer value
//char *ptr;---Points to character value
//float *ptr;---Points to float value

int main ()
{
    int x = 5; //x has a adress: a

    int *ptr; //*ptr has the adress: b

    ptr = &x; //*ptr catch the x adress: a

    // You can simplify this in just one line

    

    cout << ptr << endl;

    return 0;
}