#include <stdio.h>

int main(void){
    int dinheiro;

    scanf("%d", &dinheiro);

    printf("%d\n", dinheiro);

    printf("%d nota(s) de R$ 100,00\n", dinheiro/100);
    dinheiro %= 100;
    printf("%d nota(s) de R$ 50,00\n", dinheiro/50);
    dinheiro %= 50;
    printf("%d nota(s) de R$ 20,00\n", dinheiro/20);
    dinheiro %= 20;
    printf("%d nota(s) de R$ 10,00\n", dinheiro/10);
    dinheiro %= 10;
    printf("%d nota(s) de R$ 5,00\n", dinheiro/5);
    dinheiro %= 5;
    printf("%d nota(s) de R$ 2,00\n", dinheiro/2);
    dinheiro %= 2;
    printf("%d nota(s) de R$ 1,00\n", dinheiro);

    return 0;
}