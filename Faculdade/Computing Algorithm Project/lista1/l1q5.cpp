#include <iostream>
#include <cmath>
using namespace std;

/*questão 5*/

float waiterTipCalculator (float foodPrice)
{
    float waiter;

    waiter = 0.1 * foodPrice;

    return waiter;
}

int main () {

    float lunchPrice, waiterTip, servicePrice;
    
    cout << "What the price of the meal was..." << endl;
    cin >> lunchPrice;

    waiterTip = waiterTipCalculator (lunchPrice);
    servicePrice = lunchPrice + waiterTip;

    cout << "Hum...it cost " << servicePrice << " dollars counting with the waiter tip right?" << endl;
    cout << "Ok. Put in debit..." << endl;

    return 0;
}