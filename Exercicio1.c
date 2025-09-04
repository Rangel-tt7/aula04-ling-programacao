#include <stdio.h>

int main(){
    float salario = 2500.50;
    float *ponteiro_salario;

   ponteiro_salario = &salario;

    printf("Valor do salario: %.2f\n", *ponteiro_salario);

    *ponteiro_salario = 3000.00;

    printf("Novo salario: %.2f\n", salario);
    

return 0;
}