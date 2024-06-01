#include <stdio.h>

int main(void){
    int horas, velocidade;
    double combustivel;

    scanf("%d", &horas);
    scanf("%d", &velocidade);

    combustivel = (horas*velocidade)/12.0;

    printf("%.3lf\n", combustivel);

    return 0;
}