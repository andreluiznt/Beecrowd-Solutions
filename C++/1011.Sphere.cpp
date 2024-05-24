#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
    double R, volume, pi=3.14159;

    cin >> R;

    volume = (4/3.0) * pi * (pow(R, 3));

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}