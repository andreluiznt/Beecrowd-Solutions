#include <stdio.h>

int main(void){
    double dinheiro;
    int inteiro, aux1, aux2;

    scanf("%lf", &dinheiro);

    inteiro = dinheiro;
    dinheiro = 100*dinheiro;
    aux2 = dinheiro;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inteiro/100);
    aux1 = inteiro%100;
    printf("%d nota(s) de R$ 50.00\n", aux1/50);
    aux1 = aux1%50;
    printf("%d nota(s) de R$ 20.00\n", aux1/20);
    aux1 = aux1%20;
    printf("%d nota(s) de R$ 10.00\n", aux1/10);
    aux1 = aux1%10;
    printf("%d nota(s) de R$ 5.00\n", aux1/5);
    aux1 = aux1%5;
    printf("%d nota(s) de R$ 2.00\n", aux1/2);
    aux1 = aux1%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux1/1);

    aux2 = aux2%100;
    printf("%d moeda(s) de R$ 0.50\n", aux2/50);
    aux2 = aux2%50;
    printf("%d moeda(s) de R$ 0.25\n", aux2/25);
    aux2 = aux2%25;
    printf("%d moeda(s) de R$ 0.10\n", aux2/10);
    aux2 = aux2%10;
    printf("%d moeda(s) de R$ 0.05\n", aux2/5);
    aux2 = aux2%5;
    printf("%d moeda(s) de R$ 0.01\n", aux2/1);

    return 0;
}