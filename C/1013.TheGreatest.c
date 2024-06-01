#include <stdio.h>
#include <stdlib.h>

int maiorAB(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(void){
    int a, b, c, resultado;

    scanf("%d %d %d", &a, &b, &c);

    resultado = maiorAB(a, maiorAB(b, c));

    printf("%d eh o maior\n", resultado);

    return 0;
}