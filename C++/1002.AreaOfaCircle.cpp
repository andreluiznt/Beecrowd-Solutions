#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void){
    double A, R, pi=3.14159;

    cin >> R;

    A = pi*(pow(R, 2));

    cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}