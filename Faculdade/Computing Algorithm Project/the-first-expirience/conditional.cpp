#include <iostream>
using namespace std;

int main() {

    bool value_truth = true;
    bool value_michael = true; 

        cout << "antes" << endl;

    if (value_truth) {
        cout << "desvio" << endl;
    } else if (value_michael) {
        cout << "desvio para else" << endl;
    } else {
        cout << "desvio para o else do else" << endl;
    }

        cout << "depois" << endl;

    return 0;
}