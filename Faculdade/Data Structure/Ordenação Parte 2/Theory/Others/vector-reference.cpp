#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> vect{10,20,30,40};

    for (int &x : vect)
        x = x + 5;

    for (int x : vect)
        cout << x << " ";
        
    return 0;
}