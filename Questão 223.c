/* 223.	Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar. A verifica��o de ser realizada
atrav�s de um subprograma. */

#include <stdio.h>
#include <locale.h>

void primo(int n)
{
    if (n % 2 == 0)
    {
        printf("\n� primo.\n\n");
    }
    else
    {
        printf("\nN�o � primo.\n\n");
    }
}
void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("\nInsira um n�mero inteiro: ");
    scanf("%d", &n);

    primo(n);

    system("pause");
}
