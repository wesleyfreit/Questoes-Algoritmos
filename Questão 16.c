/* 16.	Escreva um programa que leia uma letra minúscula e imprima 
a sua letra maiúscula correspondente. */

#include <stdio.h>
#include <string.h>
// Coloquei if e else para simular o uso da letra maiuscula e minuscula correspondente.
void main()
{
    char l;
    printf("Digite uma letra: ");
    scanf("%c", &l);

    int conv = (int)l;

    if (conv >= 65 && conv <= 90)
    {
        int pMai = conv + 32;
        char mai = (char)pMai;
        printf("\nR: %c", mai);
    }
    else if (conv >= 97 && conv <= 122)
    {
        int pMin = conv - 32;
        char min = (char)pMin;
        printf("\nR: %c", min);
    }
    else
    {
        printf("\nInsira um caractere valido");
    }

    return 0;
}
/* Para converter uma variável em outra variável você tem que colocar a variável = variavel que quer converter.
EX:

char nome;
float name = (float)nome;

assim converti char para float. */