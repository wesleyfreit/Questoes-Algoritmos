/* 224.	Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto. O valor absoluto deve ser calculado atrav�s de um
subprograma (sem usar qualquer subprograma fornecido pela linguagem de programa��o). */

#include <stdio.h>

int absolute(int n)
{
    if (n >= 0)
    {
        printf("\nAbsoluto: %d\n\n", n);
    }
    else
    {
        printf("\nAbsoluto: %d\n\n", -n);
    }
}
void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    absolute(n);

    system("pause");
}
