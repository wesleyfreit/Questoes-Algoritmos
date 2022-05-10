/* 116. Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e calcule o percentual de mulheres que tem entre 18 e 21 anos.  */

#include <stdio.h>
#include <string.h>

void main()
{
    int k, idade;
    int contI = 0;
    int f = 0;
    char sexo;
    char nome[20];
    for (k = 1; k <= 20; k++)
    {
        system("cls");

        fflush(stdin);

        printf("\nInsira o nome da pessoa: ");
        gets(nome);

        fflush(stdin);

        printf("\nInsira o sexo da pessoa: ");
        scanf("%c", &sexo);

        fflush(stdin);

        if (sexo != 'm' && sexo != 'f')
        {
            printf("\nErro, sexo informado inexistente.");
            break;
        }
        else
        {
            printf("\nInsira a idade da pessoa: ");
            scanf("%d", &idade);

            fflush(stdin);

            if (sexo == 'f')
            {
                f++;
                if (idade >= 18 && idade <= 21)
                {
                    contI++;
                }
            }
        }
    }
    if (sexo != 'm' && sexo != 'f')
    {
    }
    else
    {
        contI = contI * 5;
        printf("\nO percentual de mulheres entre 18 e 21 anos = %d porcento", contI);
    }
}
