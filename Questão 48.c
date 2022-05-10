/* 48.	Uma financeira está oferecendo uma nova modalidade de empréstimo para os seus clientes. Nesta modalidade, o cliente 
pode pagar o valor financiado em até 120 parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde ao 
valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre o valor total financiado. Com base nestas informações,
 escreva um programa que leia um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o valor de cada 
 parcela e o valor total que o cliente pagará pelo empréstimo.  */

#include <stdio.h>

const float taxa = 0.04;

void main()
{
    float vFinanc;
    printf("Informe o valor financiado pelo cliente: ");
    scanf("%f", &vFinanc);

    int nParc;
    printf("Informe o numero de parcelas desejadas de 1-120: ");
    scanf("%d", &nParc);

    float valorT = (vFinanc * taxa) + vFinanc;
    float valorpParc = valorT / nParc;

    printf("\nO emprestimo ficara divido em %dx de R$%.2f.", nParc, valorpParc);
    printf("\nO valor final e de R$%.2f.", valorT);
}
