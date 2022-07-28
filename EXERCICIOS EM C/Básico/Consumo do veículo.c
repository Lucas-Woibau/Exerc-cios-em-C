#include <stdio.h>

//Dada uma distância percorrida (em quilômetros), bem como o total de combustível
//gasto (em litros), informe o consumo médio do veículo.

int main(){
    float kmPercorridos =0, consumoMedioGasto =0;

    printf("Digite os quilometros percorridos: ");
    scanf("%f", &kmPercorridos);
    printf("Digite o consumo medio gasto: ");
    scanf("%f", &consumoMedioGasto);

    printf("O consumo medio do veiculo: %.2fquilometro por litro! ", kmPercorridos/consumoMedioGasto);


    return 0;
}