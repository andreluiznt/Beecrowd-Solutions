#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int horas, velocidade;
    double combustivel;

    cin >> horas;
    cin >> velocidade;

    combustivel = (horas*velocidade)/12.0;

    cout << fixed << setprecision(3) << combustivel << endl;

    return 0;
}