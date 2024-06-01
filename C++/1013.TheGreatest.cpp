#include <iostream>
#include <stdlib.h>

using namespace std;

int maiorAB(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(void){
    int a, b, c, resultado;

    cin >> a >> b >> c;

    resultado = maiorAB(a, maiorAB(b, c));

    cout << resultado << " eh o maior" << endl;

    return 0;
}