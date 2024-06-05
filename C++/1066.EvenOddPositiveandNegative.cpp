#include <iostream>

using namespace std;

int main(void){
    int n, even=0, odd=0, positive=0, negative=0;

    for(int i=0; i<5; i++){
        cin >> n;
        if(n%2==0){
            even++;
        }else{
            odd++;
        }
        if(n > 0){
            positive++;
        }else if(n < 0){
            negative++;
        }
    }

    cout << even << " valor(es) par(es)" << endl << odd << " valor(es) impar(es)" << endl << positive << " valor(es) positivo(s)" << endl << negative << " valor(es) negativo(s)" << endl;

    return 0;
}