#include <stdio.h>

//Dadas as medidas de uma sala em metros (comprimento e largura), bem como 
//o preço do metro quadrado de carpete, informe o custo total para forrar o
//piso da sala.

int main(){
    float comprimento=0, largura=0, metroQuadrado=0, precoFinal =0;

    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe a largura: ");
    scanf("%f", &largura);
    printf("Preco do metro quadrado do carpete: ");
    scanf("%f", &metroQuadrado);

    precoFinal = comprimento*largura/metroQuadrado;

    printf("O preco final e de: %.2f reais", precoFinal);


    return 0;
}