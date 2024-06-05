#include <stdio.h>

int main(void){
    int n, odd=0, even=0, positive=0, negative=0;

    for(int i=0; i<5; i++){
        scanf("%d", &n);
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
        if(n > 0){
            positive++;
        }else{
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);

    return 0;
}