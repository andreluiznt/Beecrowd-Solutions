#include <stdio.h>

int main(void){
    float A, B, C, media;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    media = (A*2 + B*3 + C*5)/10.0;

    printf("MEDIA = %.1f\n", media);
    
    return 0;
}