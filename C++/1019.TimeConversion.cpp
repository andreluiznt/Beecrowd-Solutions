#include <iostream>

using namespace std;

int main(void){
    int segundos, minutos, horas;

    cin >> segundos;

    horas = segundos / 3600;
    minutos = segundos % 3600 / 60;
    segundos = segundos % 3600 % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}