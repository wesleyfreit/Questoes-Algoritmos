/* 66.	Escreva um programa que leia o número de pessoas que vão participar de um churrasco e calcule quantos quilos de carne 
devem ser comprados. Para isso, considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser um número inteiro. */

#include <stdio.h>

const int CarneKdPessoa = 250;

void main()
{
    int nPerson;
    printf("Insira o numero de pessoas que vao participar do churrasco: ");
    scanf("%d", &nPerson);

    int qntCarneK = (nPerson * CarneKdPessoa) / 1000;
    int qntCarneG = (nPerson * CarneKdPessoa) % 1000;

    printf("\nSera necessario %d kilo", qntCarneK, qntCarneG);
    if (qntCarneK > 1)
    {
        printf("s ");
    }
    else
    {
        printf(" ");
    }
    if (qntCarneG > 0)
    {
        printf("e %d gramas ", qntCarneG);
    }
    printf("de carne.");
}
