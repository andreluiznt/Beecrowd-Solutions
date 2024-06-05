#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int x, y;
    float total;

    cin >> x >> y;

    switch(x){
        case 1:
            total = y * 4.00;
            cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
            break;
        case 2:
            total = y * 4.50;
            cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
            break;
        case 3:
            total = y * 5.00;
            cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
            break;
        case 4:
            total = y * 2.00;
            cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
            break;
        case 5:
            total = y * 1.50;
            cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
            break;
        default:
            cout << "Produto invalido" << endl;
    }

    return 0;
}