#include <stdio.h>

//Dado um número real qualquer, informe qual é o seu dobro.

int main(){
    int numero, dobro;

    printf("Digite um numero para ver o seu dobro: ");
    scanf("%d", &numero);

    dobro = numero + numero;

    printf("O dobro de %d = %d", numero, dobro);

    return 0;

}