#include <iostream>
using namespace std;

int main(void){
    float n;
    int contador=0;

    for(int i=0; i<6; i++){
        cin >> n;
        if(n > 0){
            contador++;
        }
    }

    cout << contador << " valores positivos" << endl;
    
    return 0;
}