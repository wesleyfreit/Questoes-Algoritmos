/* 28.	Uma loja oferece três formas de pagamento para os seus clientes. 
Caso a compra seja paga à vista, a loja oferece um desconto de 10%. 
Caso a compra seja paga em três parcelas no cartão de crédito, o cliente paga o 
preço original (sem descontos, mas sem juros) da compra. Caso a compra seja paga 
em dez parcelas no cartão de crédito, a loja acrescenta uma taxa de juros de 20% 
sobre o valor da compra. Todas as dez parcelas têm exatamente o mesmo valor. 
Com base nessas informações, escreva um programa que leia o valor da compra de um 
cliente e informe: o valor da compra se ela for paga à vista, o valor de cada parcela 
se a compra for paga no cartão e em três parcelas (por exemplo, 3 parcelas de R$ 50,00) 
e o valor de cada parcela se a compra for paga com o cartão de crédito e em dez parcelas. */

#include <stdio.h>

const float dez = 0.9;
const float vint = 1.20;

void main()
{
    float vC;
    printf("Informe o valor da compra: ");
    scanf("%f", &vC);

    float aV10 = vC * dez;
    float aP3x = vC / 3;
    float aP10x = (vC * vint) / 10;

    printf("\nA vista: R$%.2f", aV10);
    printf("\nA prazo em 3x de: R$%.2f", aP3x);
    printf("\nA prazo em 10x de: R$%.2f", aP10x);

    return 0;
}