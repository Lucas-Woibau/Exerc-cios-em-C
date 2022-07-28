#include <stdio.h>

//Dados um salário e um percentural de reajuste, calcule o salário reajustado.
//Considere que o percentual de reajuse é dado por um número real entre 0 e 1.

int main(){

    float salario, salarioReajustado,percentual, calcPercent;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Percentual: ");
    scanf("%f", &percentual);

    calcPercent = salario *(percentual/100);    
    salarioReajustado = salario + calcPercent;

    printf("Salario reajustado: %.2f", salarioReajustado);

    return 0;
}