#include <iostream>

using namespace std;

int main(void){
    int dias, meses, anos;

    cin >> dias;

    anos = dias/365;
    meses = dias % 365 / 30;
    dias = dias % 365 % 30;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}