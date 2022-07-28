#include <stdio.h>

//Dado o tamanho do arquivo (em bits), bem como a velocidade de conexão
//(em bits por segundo), informe o tempo necessário para download do arquivo.

int main(){
    float bits, bps, calcular;

    printf("Digite o tamanho do arquivo(em bits): ");
    scanf("%f", &bits);
    printf("Digite a velocidade de conexao(bits por segundo): ");
    scanf("%f", &bps);

    calcular = bits/bps;

    printf("O tempo para download e de %.1f segundos!", calcular);

    return 0;
}