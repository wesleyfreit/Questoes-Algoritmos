/* 223.	Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A verificação de ser realizada
através de um subprograma. */

#include <stdio.h>
#include <locale.h>

void primo(int n)
{
    if (n % 2 == 0)
    {
        printf("\nÉ primo.\n\n");
    }
    else
    {
        printf("\nNão é primo.\n\n");
    }
}
void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("\nInsira um número inteiro: ");
    scanf("%d", &n);

    primo(n);

    system("pause");
}
