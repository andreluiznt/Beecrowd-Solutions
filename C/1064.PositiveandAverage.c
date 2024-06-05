#include <stdio.h>

int main(void){
    float n, media, soma=0;
    int positivo=0;

    for(int i=0; i<6; i++){
        scanf("%f", &n);
        if(n>0){
            positivo++;
            soma += n;
        }
    }

    media = soma/positivo;
    printf("%d valores positivos\n%.1f\n", positivo, media);
    return 0;
}