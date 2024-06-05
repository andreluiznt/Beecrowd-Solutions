#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    float n, media, soma=0;
    int positive=0;

    for(int i=0; i<6; i++){
        cin >> n;
        if(n > 0){
            positive++;
            soma += n;
        }
    }

    media = soma/positive;
    cout << positive << " valores positivos" << endl << fixed << setprecision(1) << media << endl;
    return 0;
}