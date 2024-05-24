#include <stdio.h>

int main(void){
    int codProd, uniProd, codProd2, uniProd2;
    float precoProd, precoProd2, precoTotal;

    scanf("%d %d %f", &codProd, &uniProd, &precoProd);
    scanf("%d %d %f", &codProd2, &uniProd2, &precoProd2);

    precoTotal = (uniProd*precoProd) + (uniProd2*precoProd2);

    printf("VALOR A PAGAR: R$ %.2f\n", precoTotal);

    return 0;
}