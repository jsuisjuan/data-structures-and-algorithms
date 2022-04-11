#include <iostream>

using namespace std;

struct Ponto
{
    float x, y;
};

int main()
{
    Ponto p[][3] = {
        { { 100, 200 }, { 110, 240 }, { 120, 230 } },
        { { 100, 200 }, { 110, 240 }, { 120, 230 } },
        { { 100, 200 }, { 110, 240 }, { 120, 230 } }
    };

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << p[i][j].x << " " << p[i][j].y << endl;
        }
    }

}