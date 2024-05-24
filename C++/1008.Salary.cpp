#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int numEmpregado, horasTraba;
    float salarioHora, salarioMes;

    cin >> numEmpregado;
    cin >> horasTraba;
    cin >> salarioHora;

    salarioMes = salarioHora * horasTraba;

    cout << "NUMBER = " << numEmpregado << endl << "SALARY = U$ " << fixed << setprecision(2) << salarioMes << endl;

    return 0;
}