#include <stdio.h>

int main(){
    int totalVendas=0;
    float comissao;

    printf("Informe o total de vendas: ");
    scanf("%d", &totalVendas);

    comissao = totalVendas * 0.1;

    printf("Total de comissao: %.2f",comissao);

    return 0;
}