#include <stdio.h>

//Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago.
//Considere que o percentual de desconto é um numero entre 0 e 1.

int main(){
    float valorProduto, valorDesconto, percentDesconto, calcPercent;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Digite a porcentagem do desconto: ");
    scanf("%f", &percentDesconto);

    calcPercent = percentDesconto/100;
    valorDesconto = valorProduto - (calcPercent * valorProduto);
    
    printf("O produto com desconto e: %.2f", valorDesconto);

    return 0;
}