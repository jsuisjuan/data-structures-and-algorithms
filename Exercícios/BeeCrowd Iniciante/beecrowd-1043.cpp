// beecrowd | 1043: Triângulo
// https://www.beecrowd.com.br/judge/pt/problems/view/1043

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double A, B, C;
    double perimetro, trapezio;

    cin >> A >> B >> C;

    if ((B-C) < A && (B+C) > A) {
        if ((A-C) < B && (A+C) > B) {
            if ((A-B) < C && (A+B) > C) {
                perimetro = A+B+C;
                cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
            }
        }
    } else {
        trapezio = ((A+B)*C)/2;
        cout << "Area = " << fixed << setprecision(1) << trapezio << endl;
    }
    return 0;
}

/* --> Programa mais simples
int main() {
    double a,b,c,ans;
    cin>>a>>b>>c;

    if(a<(b+c)&&b<(a+c)&&(a+b)){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }else{
        ans=0.5*(a+b)*c;
        cout<<fixed<<setprecision(1)<<"Area = "<<ans<<endl;
    }

    return 0;
}
*/