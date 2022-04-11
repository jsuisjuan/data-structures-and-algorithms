#include <iostream>
using namespace std;

/*questão 13*/

float squareVolume (float a, float b, float c)
{
    float volume;
    volume = a*b*c;
    return volume;
}

float cylinderVolume (float radius, float height)
{
    float pi, volume;
    pi = 3.14;
    volume = pi * height * (radius * radius);
    return volume;
}

int main () 
{
    float squarelinderVolume;
    squarelinderVolume = squareVolume(10, 10, 5) - cylinderVolume(2, 2.5);
    cout <<"the volume of the square cylinder is = "<< squarelinderVolume << endl;
    return 0;
}