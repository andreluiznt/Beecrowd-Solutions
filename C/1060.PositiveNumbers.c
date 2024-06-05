#include <stdio.h>

int main(void){
    float n;
    int contador=0;

    for(int i=0; i<6; i++){
        scanf("%f", &n);
        if(n > 0){
            contador++;
        }
    }

    printf("%d valores positivos\n", contador);

    return 0;
}