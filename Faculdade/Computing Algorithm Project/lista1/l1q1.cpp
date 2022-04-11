#include <iostream>
#include <cmath>
using namespace std;

/*questão 1*/

float imcCalculator (float w, float h)
{
    float imc;

    imc = w / (h * h);

    return imc;
}

int main () {

    float weight, height, imc;

    cout << "What is your weight?" << endl;
    cin >> weight;

    cout << "What is your height?" << endl;
    cin >> height;

    imc = imcCalculator (weight, height);

    if ( imc > 0 && imc <= 18.5) {

        cout << "Your IMC is = " << imc << " and you are underweight." << endl;

    } if ( imc > 18.5 && imc <= 24.5 ) {

        cout << "Your IMC is = " << imc << " and you are with normal weight." << endl;

    } if ( imc > 25 && imc <= 29.9 ) {

        cout << "Your IMC is = " << imc << " and you are overweight." << endl;

    } if ( imc > 30 && imc <= 34.9 ) {

        cout << "Your IMC is = " << imc << " and you are with grade I of obesity." << endl;

    } if ( imc > 35 && imc <= 39.9 ) {

        cout << "Your IMC is = " << imc << " and you are with grade II of obesity." << endl;

    } if ( imc >= 40) {

        cout << "Your IMC is = " << imc << " and you are with morbid obesity." << endl;

    }
    return 0;
}