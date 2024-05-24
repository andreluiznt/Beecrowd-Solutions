#include <stdio.h>

int main(void){
    int numEmpregado, horasTrab;
    float salarioHora, salarioMes;

    scanf("%d", &numEmpregado);
    scanf("%d", &horasTrab);
    scanf("%f", &salarioHora);

    salarioMes = horasTrab * salarioHora;

    printf("NUMBER = %d\n", numEmpregado);
    printf("SALARY = U$ %.2f\n", salarioMes);

    return 0;
}