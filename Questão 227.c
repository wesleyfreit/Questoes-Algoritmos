/* 227.	Escreva um programa que leia a idade de uma pessoa e verifique se ela � crian�a (012 anos), adolescente (13-17 anos),
adulta (18-59) ou idosa (acima de 60 anos). Esta verifica��o deve ser realizada atrav�s de um subprograma.  */
#include <stdio.h>
#include <locale.h>

int verificador(int n)
{
    if (n >= 1 && n <= 12)
    {
        printf("\n� uma crian�a.\n\n");
    }
    else if (n >= 13 && n <= 17)
    {
        printf("\n� um adolescente.\n\n");
    }
    else if (n >= 18 && n <= 59)
    {
        printf("\n� um adulto.\n\n");
    }
    else if (n >= 60 && n <= 140)
    {
        printf("\n� um idoso.\n\n");
    }
    else
    {
        printf("\nN�mero Inv�lido.\n\n");
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Insira a idade: ");
    scanf("%d", &idade);

    verificador(idade);

    system("pause");
}