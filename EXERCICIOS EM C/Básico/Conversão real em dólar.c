#include <stdio.h>

//Dados um valor em real e a cotação do dolar, converta esse valor em dólares.

int main(){
    float real, dolar, conversao;

    printf("Digite o valor em real: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dolar);

    conversao = real/dolar;

    printf("O valor em real e igual a %.2f dolares", conversao);

    return 0;
}