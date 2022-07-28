#include <stdio.h>

//Dadas as idades dos pacientes de uma clínica, informe a idade daquele mais idoso.
//Considere que todas as idades são distintas e que o número de pacientes é informado
//pelo usuário, no momento da execução do programa.

int main(){

    //Imprimir a maior idade
    int idade, numPacientes, i, maiorIdade;

    printf("Digite o numero de pacientes: ");
    scanf("%i", &numPacientes);

    maiorIdade = -1;  //É atribuído a maior idade a -1.              

    for(i=1;i<=numPacientes;i++){
        printf("Digite a idade do paciente %d: ", i);
        scanf("%i", &idade);  

        if(idade>maiorIdade)       
            maiorIdade = idade;    //Maior idade passa a ser o maior numero e assim compara com os outros números,                       
    }                               //E assim prevalece o maior
       
    printf("Maior idade e: %d", maiorIdade);
    return 0;
}