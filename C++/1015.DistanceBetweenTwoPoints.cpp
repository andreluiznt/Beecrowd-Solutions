#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void){
    double x1, y1, x2, y2, distancia;
    double p1, p2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    p1 = pow(x2 - x1, 2);
    p2 = pow(y2 - y1, 2);

    distancia = sqrt(p1 + p2);

    cout << fixed << setprecision(4) << distancia << endl;
    
    return 0;
}