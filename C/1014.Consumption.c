#include <stdio.h>

int main(void){
    int distancia;
    float totalGasto, consumo;

    scanf("%d", &distancia);
    scanf("%f", &totalGasto);

    consumo = (float)distancia/totalGasto;

    printf("%.3f km/l\n", consumo);

    return 0;
}