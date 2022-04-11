#include <iostream>
using namespace std;



int main() {

    int i, j, matricula, salario, maior;
    int N = 10;
  
    for (i = 0; i <= N; i++) {

        cin >> matricula >> salario;
        if (i==0 || salario > maior) {
            maior = salario;
        }
        for (j = 0; j <= maior; j++) {
            
            cout << j << " funcionarios ganharam " << maior << endl;
        }
    }
    
}