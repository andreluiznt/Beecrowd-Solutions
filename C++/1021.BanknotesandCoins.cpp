#include <iostream>

using namespace std;

int main(void){
    double dinheiro;
    int inteiro, aux1, aux2;

    cin >> dinheiro;

    inteiro = dinheiro;
    dinheiro = 100*dinheiro;
    aux2 = dinheiro;

    cout << "NOTAS:" << endl;
    cout << inteiro/100 << " nota(s) de R$ 100.00" << endl;
    aux1 = inteiro%100;
    cout << aux1/50 << " nota(s) de R$ 50.00" << endl;
    aux1 = aux1%50;
    cout << aux1/20 << " nota(s) de R$ 20.00" << endl;
    aux1 = aux1%20;
    cout << aux1/10 << " nota(s) de R$ 10.00" << endl;
    aux1 = aux1%10;
    cout << aux1/5 << " nota(s) de R$ 5.00" << endl;
    aux1 = aux1%5;
    cout << aux1/2 << " nota(s) de R$ 2.00" << endl;
    aux1 = aux1%2;
    cout << "MOEDAS:" << endl;
    cout << aux1/1 << " moeda(s) de R$ 1.00" << endl;

    aux2 = aux2%100;
    cout << aux2/50 << " moeda(s) de R$ 0.50" << endl;
    aux2 = aux2%50;
    cout << aux2/25 << " moeda(s) de R$ 0.25" << endl;
    aux2 = aux2%25;
    cout << aux2/10 << " moeda(s) de R$ 0.10" << endl;
    aux2 = aux2%10;
    cout << aux2/5 << " moeda(s) de R$ 0.05" << endl;
    aux2 = aux2%5;
    cout << aux2/1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}