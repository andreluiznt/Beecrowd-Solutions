#include <stdio.h>
#include <math.h>

int main(void){
    double x1, y1, x2, y2, distancia;
    double p1, p2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    p1 = pow(x2 - x1, 2);
    p2 = pow(y2 - y1, 2);

    distancia = sqrt(p1 + p2);

    printf("%.4lf\n", distancia);

    return 0;
}