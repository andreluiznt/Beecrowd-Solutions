#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    char nome[20];
    double salarioFixo, valorVenda, salarioBonus;

    cin >> nome;
    cin >> salarioFixo;
    cin >> valorVenda;

    salarioBonus = (valorVenda * 0.15) + salarioFixo;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salarioBonus << endl;

    return 0;
}