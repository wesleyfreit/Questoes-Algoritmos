/* 43.	Escreva um programa que leia o preço atual de uma ação e o seu preço anterior e calcule a sua variação em termos percentuais. 
Por exemplo, se o preço atual for R$ 10,00 e o preço anterior era R$ 5,00 a variação foi de 100%.  */

#include <stdio.h>

void main()
{
    float prAt, prAnt;

    printf("Informe o preco atual da acao em R$: ");
    scanf("%f", &prAt);
    printf("Informe o preco anterior da acao em R$: ");
    scanf("%f", &prAnt);

    float porct = prAnt * 100 / prAt;
    float variacao = (100 - porct) * 2;

    printf("\nA variacao foi de %.2f porcento.", variacao);
}