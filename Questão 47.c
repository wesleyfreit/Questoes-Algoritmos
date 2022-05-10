/* 47.	Um banco está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em 5 prestações. 
O valor da primeira prestação corresponde à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao valor 
da parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações, escreva um programa que leia o valor a ser 
financiado por um cliente e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total 
de juros que o cliente vai pagar pelo empréstimo.  */

#include <stdio.h>

const float juros = 0.07;

void main()
{
    float valorF, k;
    printf("Informe o valor a ser financiado: ");
    scanf("%f", &valorF);

    float prinParc = valorF * 0.2;

    float parcCJuros = prinParc;
    int cont = 1;
    float valorT = prinParc;

    printf("\nParc. 1 = R$%.2f", prinParc);

    for (k = 1; k <= 4; k++)
    {
        cont++;
        parcCJuros = (parcCJuros * juros) + parcCJuros;
        valorT = parcCJuros + valorT;

        printf("\nParc. %d = R$%.2f", cont, parcCJuros);
    }
    
    float jurosPag = valorT - valorF;

    printf("\n\nJuros - R$%.2f", jurosPag);
    printf("\nTOTAL - R$%.2f", valorT);
}