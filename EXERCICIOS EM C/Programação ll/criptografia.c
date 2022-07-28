#include <stdio.h>
#include <string.h>

int main(){
    char frase[128];
    int i, tam;

    printf("Digite uma frase para ser codificada: ");
    gts(frase[128]);

    tam = strlen(frase);

    for(i=0;i<tam;i++){
        switch{
        case 'a':
            frase[i] = '._';
            break;
        case 'b':
            frase[i] = '_...';
            break;
        case 'c':
            frase[i] = '._';
            break;
        case 'd':
            frase[i] = '._';
            break;
        case 'e':
            frase[i] = '._';
            break;
        case 'f':
            frase[i] = '._';
            break;
        case 'g':
            frase[i] = '._';
            break;
        case 'h':
            frase[i] = '._';
            break;
        case 'i':
            frase[i] = '._';
            break;
        case 'j':
            frase[i] = '._';
            break;
        case 'k':
            frase[i] = '._';
            break;
        case 'l':
            frase[i] = '._';
            break;
        case 'm':
            frase[i] = '._';
            break;
        case 'n':
            frase[i] = '._';
            break;
        case 'o':
            frase[i] = '._';
            break;
        case 'p':
            frase[i] = '._';
            break;
        case 'q':
            frase[i] = '._';
            break;
        case 'r':
            frase[i] = '._';
            break;
        case 's':
            frase[i] = '._';
            break;
        case 't':
            frase[i] = '._';
            break;
        case 'u':
            frase[i] = '._';
            break;
        case 'v':
            frase[i] = '._';
            break;
        case 'w':
            frase[i] = '._';
            break;
        case 'x':
            frase[i] = '._';
            break;
        case 'y':
            frase[i] = '._';
            break;
        case 'z':
            frase[i] = '._';
            break;       
        }      
    }

    printf("%s",frase[i]);  

    return 0;

}