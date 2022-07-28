#include <stdio.h>
//Numa eleição há três candidatos, identificados como A, B e C. Dados os votos dos eleitores
//informe o resultado da eleição.

int main(){
    int eleitores=0, i, candidatoA=0, candidatoB=0, candidatoC=0, voto=0, nulo=0;
    
    printf("Total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Vote nos candidatos A | B | C\n");

    for(i=1;i<=eleitores;i++){
        printf("---------------------------\n");
        printf("1 para candidato A\n2 para candidato B\n3 para candidato C\n0 para voto NULO\nDigite seu voto => ");
        scanf("%d", &voto);

        if(voto == 1)
            candidatoA++;  
                  
        if(voto == 2)
            candidatoB++;

        if(voto == 3)
            candidatoC++;
        
        if(voto==0)
            nulo++;                 
    }
    printf("--------------------------------------------------\n");
    printf("Resultado:\nA= %d\nB=%d\nC=%d\nNulos=%d", candidatoA, candidatoB, candidatoC, nulo);
    
    return 0;
}