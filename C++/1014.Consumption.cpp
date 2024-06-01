#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int distancia;
    float totalGasto, consumo;

    cin >> distancia;
    cin >> totalGasto;

    consumo = (float)distancia/totalGasto;

    cout << fixed << setprecision(3) << consumo << " km/l" << endl;

    return 0;
}