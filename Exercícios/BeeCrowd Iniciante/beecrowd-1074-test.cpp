#include <iostream>
using namespace std;

int main() {
    int N;

    do {
        cin >> N;
    } while (N < 5 || N > 2000);
    
    for (int i = 1; i <= N; i++) {
        if (i%2==0) {
            cout << i << "^2 = " << i*i << endl;
        }
    }

    return 0;
}