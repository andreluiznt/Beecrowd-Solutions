#include <iostream>

using namespace std;

int main(void){
    int n, even=0;

    for(int i=0; i<5; i++){
        cin >> n;
        if(n%2==0){
            even++;
        }
    }

    cout << even << " valores pares" << endl;

    return 0;
}