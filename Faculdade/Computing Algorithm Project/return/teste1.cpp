#include <iostream>
using namespace std;

/*int main() {

    int i, matricula;
    float  n1, n2, alunoMedia, mediaTotal;
    mediaTotal = 0;

    for (i = 0; i < 15; i++) {
        cin >> matricula >> n1 >> n2;
        alunoMedia = (n1 + n2) / 2;
        mediaTotal = mediaTotal + alunoMedia;
    }
    cout << mediaTotal / 15.0 << endl;
    return 0;
} */

int main() {

    int i, matricula;
    float  n1, n2, alunoMedia, mediaTotal;
    mediaTotal = 0;

    for (i = 0; i < 3; i++) {
        cin >> matricula >> n1 >> n2;
        alunoMedia = (n1 + n2) / 2;
        mediaTotal = mediaTotal + alunoMedia;
    }
    cout << mediaTotal / 3.0 << endl;
    return 0;
}