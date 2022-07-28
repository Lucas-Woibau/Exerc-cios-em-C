#include <stdio.h>

int main(){
    float comprimento, largura, medida;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);

    medida = comprimento * largura;

    printf("A sala tem %.2fm quadrados", medida);

    return 0;

}