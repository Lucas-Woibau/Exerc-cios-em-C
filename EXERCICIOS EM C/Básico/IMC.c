#include <stdio.h>
#include <math.h>

//O índice de massa corpórea (IMC) de uma pessoa é igual o seu peso (em quilogramas)
//dividido pelo quadrado de sua altura (em metros). Dados o peso e a altura, informe
//o valor de seu IMC.

int main(){
    float  peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura,altura);

    if(imc<18.5)
        printf("IMC = %.2f | Voce esta abaixo do peso!", imc);        
    
    if(imc<=24.9 && imc>=18.5)
        printf("IMC = %.2f | Voce esta no peso ideal!", imc);
    
    if(imc>=25.0 && imc<=29.9)
        printf("IMC = %.2f | Voce esta levemente acima do peso!", imc);
    
    if(imc>=30.0 && imc<=34.9)
        printf("IMC = %.2f | Obesidade grau 1!", imc);

    if(imc>=25.0 && imc<=39.9)
        printf("IMC = %.2f | Obesidade grau 2 (Severa)!", imc);
    
    if(imc>40)
        printf("IMC = %.2f | Obesidade 3 (morbida)!", imc);
    
    return 0;
}