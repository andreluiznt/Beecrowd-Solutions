#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int codProd, codProd2, uniProd, uniProd2;
    float precoProd, precoProd2, precoTotal;

    cin >> codProd >> uniProd >> precoProd;
    cin >> codProd2 >> uniProd2 >> precoProd2;

    precoTotal = (uniProd*precoProd) + (uniProd2*precoProd2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << precoTotal << endl;
    
    return 0;
}