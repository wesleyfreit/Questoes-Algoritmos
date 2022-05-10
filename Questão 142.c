/* 142.	O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em
até 240 prestações. O valor da primeira prestação corresponde ao valor do empréstimo dividido pelo número de parcelas.
Os valores das demais prestações correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%.
Escreva um programa que leia o valor a ser financiado por um cliente e o número de prestações desejadas e calcule:
o valor de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser
pago e o valor financiado. */

#include <stdio.h>

const float juros = 1.07;

void main()
{
    float money;
    printf("Insira o valor a ser financiado pelo cliente: ");
    scanf("%f", &money);
    int nParc, k;
    printf("Insira o numero de prestacoes desejadas: ");
    scanf("%d", &nParc);

    float primeira = money / nParc;

    printf("\nO valor das prestacoes e:\n");
    printf("\nPrestacao 1 : %.2f", primeira);

    float vlF = primeira;

    for (k = 2; k <= nParc; k++)
    {
        primeira = primeira * juros;
        printf("\nPrestacao %d : %.2f", k, primeira);
        vlF = primeira + vlF;
    }
    printf("\n\nO cliente ao final ira pagar %.2f", vlF);
    printf("\nO valor financiado foi de %.2f e os juros encima deste valor serao de %.2f;", money, vlF - money);
}