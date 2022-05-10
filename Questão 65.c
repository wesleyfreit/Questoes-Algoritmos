/* 65.	Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12 anos), 
adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos). */

#include <stdio.h>

void main()
{
    int id;
    printf("Insira a idade: ");
    scanf("%d", &id);

    if (id >= 0 && id <= 12)
    {
        printf("\nE uma crianca.");
    }
    else if (id >= 13 && id <= 17)
    {
        printf("\nE um adolecente.");
    }
    else if (id >= 18 && id <= 59)
    {
        printf("\nE um adulto.");
    }
    else if (id >= 60 && id <= 140)
    {
        printf("\nE um idoso.");
    }
    else
    {
        printf("\nInsira uma idade correta.");
    }
}
