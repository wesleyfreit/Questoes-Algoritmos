/* 21.	Escreva um programa que leia o preço de produção de um determinado produto
 e a margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de venda.  */

#include <stdio.h>

void main()
{
    float vProd, pLucro;
    printf("Insira o valor de producao do produto: ");
    scanf("%f", &vProd);
    printf("Insira a margem de lucro desejada para o produto: ");
    scanf("%f", &pLucro);

    float porct = pLucro / 100;
    float lucro = vProd * porct;
    float pVenda = lucro + vProd;

    printf("\nO produto sera vendido por R$%.2f", pVenda);
}