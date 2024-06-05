#include <stdio.h>

int main(void){
    int x, y;
    float total;

    scanf("%d %d", &x, &y);

    switch(x){
        case 1:
            total = y * 4.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 2:
            total = y * 4.50;
            printf("Total: R$ %.2f\n", total);
            break;
        case 3:
            total = y * 5.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 4:
            total = y * 2.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 5:
            total = y * 1.50;
            printf("Total: R$ %.2f\n", total);
            break;
        default:
            printf("Produto invalido.\n");
    }

    return 0;
}