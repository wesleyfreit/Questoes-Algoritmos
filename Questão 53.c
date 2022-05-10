/* 53.	Escreva um programa que leia o mês e o ano em que um preso começará a cumprir a sua pena e o tamanho da pena (em número de anos e 
número de meses, por exemplo, 18 anos e 5 meses)  e determine o mês e o ano em que ele terminará de cumprir a sua pena. Para resolver 
esta questão, considere que o ano será sempre maior ou igual a 2000.  */

#include <stdio.h>

void main()
{
    int mes, ano, anoP, mesP;
    printf("Informe o ano que o detento comecara a cumprir a pena: ");
    scanf("%d", &ano);
    printf("Informe o mes que o detento comecara a cumprir a pena: ");
    scanf("%d", &mes);
    printf("\nInforme quantos anos para a pena ser cumprida: ");
    scanf("%d", &anoP);
    printf("Informe quantos meses para a pena ser cumprida: ");
    scanf("%d", &mesP);

    if (ano < 2000 || mes < 1 || mes > 12)
    {
        printf("\nInforme um valor correto.");
    }
    else
    {
        int somaMes = mes + mesP;
        int quociente = somaMes / 13;
        int restoMes = somaMes % 13;
        int somaAno = ano + anoP + quociente;

        if (restoMes == 0)
        {
            printf("\nA pena sera finalizada no mes 1 de %d.", somaAno);
        }
        else
        {
            printf("\nA pena sera finalizada no mes %d de %d.", restoMes, somaAno);
        }
    }
}
