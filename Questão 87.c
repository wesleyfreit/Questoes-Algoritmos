/* 87.	Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa e imprima o estado civil informado por extenso. 
As opções para o estado civil são: S (solteiro), C (casado), D (divorciado) e V (viúvo). */

#include <stdio.h>
#include <string.h>

void main()
{
    char carac;
    printf("Insira o estado civil: ");
    scanf("%c", &carac);

    switch(carac){
        case 'S':
        case 's': 
            printf("\nSolteiro.");
            break;
        case 'C':
        case 'c':
            printf("\nCasado.");
            break;
        case 'D':
        case 'd':
            printf("\nDivorcidado.");
            break;
        case 'V':
        case 'v':
            printf("\nViuvo.");
            break;
        default:
            printf("\nO caractere nao pertence a nenhum estado civil.");
            break;
                
    }
}