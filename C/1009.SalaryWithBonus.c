#include <stdio.h>

int main(void){
    char nome[20];
    double salarioFixo, valorVenda, salarioBonus;

    scanf("%s", nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &valorVenda);

    salarioBonus = (valorVenda * 0.15) + salarioFixo;

    printf("TOTAL = R$ %.2lf\n", salarioBonus);

    return 0;

}