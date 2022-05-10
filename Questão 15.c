/* 15.	Escreva um programa que leia uma palavra e um número 
inteiro k e identifique a késima letra da palavra informada pelo usuário.  */

#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[40];
    int k;
    printf("Escreva a palavra: ");
    gets(palavra);
    printf("insira o numero: ");
    scanf("%d", &k);

    char kesima = palavra[k-1];

    printf("\nA letra de numero %d sera %c", k, kesima);
}