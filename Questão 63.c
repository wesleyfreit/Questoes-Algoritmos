/* 63.	Escreva um programa que leia o número de gols marcados pelo time da casa e o número de gols marcado pelo time visitante 
e verifique se o jogo foi vencido pelo time da casa, pelo time visitante ou se terminou empatado.  */

#include <stdio.h>

void main()
{
    int golsCasa, golsVisit;
    printf("Insira a quantidade de gols marcados pelo time da casa: ");
    scanf("%d", &golsCasa);
    printf("Insira a quantidade de gols marcados pelo time visitante: ");
    scanf("%d", &golsVisit);

    if (golsCasa >= 0 && golsVisit >= 0)
    {
        if (golsCasa == golsVisit)
        {
            printf("\nO jogo terminou em empate.");
        }
        else if (golsCasa > golsVisit)
        {
            printf("\nO time da casa venceu.");
        }
        else
        {
            printf("\nO time visitante venceu.");
        }
    }
    else
    {
        printf("\nInsira um numero valido");
    }
}
