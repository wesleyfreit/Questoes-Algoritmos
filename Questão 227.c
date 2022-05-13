/* 227.	Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (012 anos), adolescente (13-17 anos),
adulta (18-59) ou idosa (acima de 60 anos). Esta verificação deve ser realizada através de um subprograma.  */
#include <stdio.h>
#include <locale.h>

int verificador(int n)
{
    if (n >= 1 && n <= 12)
    {
        printf("\nÉ uma criança.\n\n");
    }
    else if (n >= 13 && n <= 17)
    {
        printf("\nÉ um adolescente.\n\n");
    }
    else if (n >= 18 && n <= 59)
    {
        printf("\nÉ um adulto.\n\n");
    }
    else if (n >= 60 && n <= 140)
    {
        printf("\nÉ um idoso.\n\n");
    }
    else
    {
        printf("\nNúmero Inválido.\n\n");
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