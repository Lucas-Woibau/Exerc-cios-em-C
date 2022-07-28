#include <stdio.h>
#include <math.h>

//Dados um capital C, uma taxa de juros mensal fixa J e um período de aplicação
//em meses M, informe o montante F no final do péríodo (F = C*(1+J/100)^M).

int main(){
    float c=0, j=0, f=0;
    int m=0;

    printf("Digite o capital: ");
    scanf("%f", &c);
    printf("Digite a taxa de juros mensal fixa: ");
    scanf("%f", &j);
    printf("Digite os meses de aplicacao: ");
    scanf("%d", &m);
    f = c*pow(1+j/100, m);

    printf("Montante final: %.2f reais.", f);

    return 0;

}