#include <stdio.h>

int main(void){
    float a, b, c, triangulo, trapezio;

    scanf("%f %f %f", &a, &b, &c);

    if((a+b) > c || (a+c) > b || (b+c) > a){
        trapezio = ((a+b)*c)/2.0;
        printf("%.1f\n", trapezio);
    }else{
        triangulo = a+b;
        printf("%.1f\n", triangulo);
    }

    return 0;
}