#include <stdio.h>

//Dados um capital, uma  taxa de juros mensal e um período em meses,
//informe o montante no final de cada mês.

int main(){
    float capital, juros, montante;
    int meses, i;

    printf("Digite o capital: ");
    scanf("%f", &capital);
    printf("Digite os juros: ");
    scanf("%f", &juros);
    printf("Digite o periodo em meses: ");
    scanf("%d", &meses);

    juros = juros / 100;                //Dividindo o juros por cem
    montante = capital * (1 + juros);   //Aplicando o calculo do montante

    for(i= 1;i<=meses;i++){                      
        printf("%d mes: %.2f\n", i, montante);   //Mostrando o numero do mes 
        montante = montante + (montante*juros);  //Calculando no loop 
    }

    return 0;
}