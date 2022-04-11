#include <iostream>
using namespace std;

int main () {

    int i, qtd, n;

    qtd = 0;

    for (i = 0; i < 15; i++) {

        cin >> n;

        if (n > 30) {

            qtd++;

        }
    }
    cout << qtd;
  
    return 0;
}

int main() // ERRADA!
{
    int i, n;
    for (i = 0; i < 15; i++)
    {
        std::cin >> n;
        if (n > 30)
        {
            std::cout << n;
        }
    }
}