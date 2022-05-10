/* 14.	Escreva um programa que leia uma palavra e calcule o seu comprimento. */

#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[20];
    printf("Escreva a palavra: ");
    gets(palavra);

    int comp = strlen(palavra);
    
    printf("\nA palavra '%s' tem %d caracteres.", palavra, comp);

    return 0;
}