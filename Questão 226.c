/* 226.	Escreva um programa que leia um n�mero inteiro e verifique se ele � positivo, negativo ou neutro.
Esta verifica��o deve ser realizada atrav�s de um subprograma.  */
#include <stdio.h>
#include <locale.h>

int verificador(int n)
{
    if (n < 0)
    {
        printf("\n� negativo.\n\n");
    }
    else if (n > 0)
    {
        printf("\n� positivo.\n\n");
    }
    else
    {
        printf("\n� neutro.\n\n");
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, m;
    printf("Insira um n�mero N: ");
    scanf("%d", &n);

    verificador(n);

    system("pause");
}