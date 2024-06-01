#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0){
        printf("Impossivel calcular\n");
    }

    delta = pow(b, 2) + (4*a*c);

    if(delta < 0){
        printf("Impossivel calcular\n");
    }else if(delta > 0){
        r1 = (-b + sqrt(delta))/(2*a);
        r2 = (-b - sqrt(delta))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }

    return 0;
}