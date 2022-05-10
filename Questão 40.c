/* 40.	Escreva um programa que leia o valor total que um cliente consumiu em um restaurante e determine o valor final da sua conta, 
considerando que o restaurante cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.  */

#include <stdio.h>

const float v10 = 0.1;
const float couvent = 10;

void main()
{
    float comanda;
    printf("Insira o valor total da conta: ");
    scanf("%f", &comanda);

    float taxa = comanda * v10;
    float conta = taxa + comanda + couvent;

    printf("\nA conta ficara assim:\n\nComanda - R$%.2f \nTaxa - R$%.2f \nCouvent - R$%.2f \n\nVf = R$%.2f",comanda, taxa, couvent, conta);

}