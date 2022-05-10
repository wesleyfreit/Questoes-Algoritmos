/* 34.	Escreva um programa que leia o dia do mês em que o cliente fez uma compra
e o prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses seguintes) 
em que o cliente deve receber o produto. Para resolver este programa, considere que cada mês 
tem exatamente 30 dias.  */

#include <stdio.h>

const int mes = 30;

void main()
{
    int dM, prazo;
    printf("Insira o dia do mes que o cliente fez a compra: ");
    scanf("%d", &dM);
    printf("Insira o prazo de entrega estipulado pelo vendedor: ");
    scanf("%d", &prazo);

    int soma = dM + prazo;

    if (soma <= mes && dM >= 1)
    {

        printf("A entrega chegara no dia %d deste mes", soma);
    }
    else if (soma > mes && soma <= 2 * mes)
    {
        int m2 = soma % mes;
        if (m2 > 0)
        {
            printf("A entrega chegara no dia %d do proximo mes", m2);
        }
        else
        {
            printf("A entrega chegara no dia %d do proximo mes", mes);
        }
    }
    else if (soma > 2 * mes && soma <= 3 * mes)
    {
        int m3 = soma % 2 * mes;
        if (m3 > 0)
        {
            printf("A entrega chegara no dia %d do terceiro mes", m3);
        }
        else
        {
            printf("A entrega chegara no dida %d do terceiro mes", mes);
        }
    }
    else
    {
        printf("Insira uma data correta");
    }

    return 0;
}