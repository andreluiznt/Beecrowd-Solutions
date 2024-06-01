#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void){
    double a, b, c, delta, r1, r2;

    cin >> a >> b >> c;

    if(a == 0.0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    delta = (pow(b, 2)) - (4*a*c);

    if(delta < 0){
        cout << "Impossivel calcular" << endl;
    }else{
        r1 = (-b + sqrt(delta))/(2*a);
        r2 = (-b - sqrt(delta))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}