#include <stdio.h>

//Dadas as notas dos alunos de uma turma, informe a média da turma.

int main()
{
    float notas, media, soma;
    int i, numAlunos;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    soma = 0;

    for(i=1;i<=numAlunos;i++){
        printf("Digite a nota: ");
        scanf("%f", &notas);
        soma = soma + notas;       
    }
    
    media = soma/numAlunos;

    printf("A media eh: %.2f", media);      
    return 0;          
}



