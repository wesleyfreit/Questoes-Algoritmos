/* 86.	Escreva um programa que leia um caractere e verifique se o mesmo é uma letra maiúscula, uma letra minúscula, um numeral ou nenhum 
dos tipos anteriores.  */

#include <stdio.h>
#include <string.h>

void main()
{
    char c;
    printf("Insira um caractere: ");
    scanf("%c", &c);

    int conv = (int)c;

    if (conv >= 65 && conv <= 90)
    {
        printf("\nO caractere e uma letra maiuscula.");
    }
    else if (conv >= 97 && conv <= 122)
    {
        printf("\nO caractere e uma letra minuscula.");
    }
    else if (conv >= 48 && conv <= 57)
    {
        printf("\nO caractere e um numeral.");
    }
    else{
        printf("\nO caractere nao e letra nem numeral.");
    }
}