/* 52.	Um provedor de internet oferece um plano promocional para os seus clientes. Neste plano, ele paga uma mensalidade de R$ 80,00 
e pode acessar até 100 GB de dados.  Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma taxa adicional 
de R$ 5,00 por cada GB extra acessado. Com base nestas informações, escreva um programa que leia a quantidade de dados acessados pelo 
cliente durante um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade nunca é inferior a 100 GB..   */

#include <stdio.h>

const float vM = 80;
const float limitM = 100;
const float taxaAd = 5;

void main()
{
    float gb;
    printf("Informe a quantidade de dados acessados pelo cliente durante um mes: ");
    scanf("%f", &gb);

    if (gb < 100)
    {
        printf("\nO valor de consumo nao pode ser inferior a 100gb de dados.");
    }
    else
    {
        float extra = (gb - limitM) * taxaAd;
        float conta = extra + vM;

        printf("\nA conta do cliente sera R$%.2f.", conta);
    }
}
