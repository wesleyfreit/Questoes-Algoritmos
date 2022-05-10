/* 222.	O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em 5 prestações.
O valor da primeira prestação corresponde à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e
calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros que o cliente vai
pagar pelo empréstimo. O programa deve ter um subprograma para calcular o valor de cada parcela do empréstimo.*/

#include <stdio.h>
#include <locale.h>

const float prim = .2;
const float outras = .07;

float primeira(float valor)
{
    return valor * prim;
}
float demais(float valor, int parc, float primeira)
{
    valor = valor - primeira;
    valor = valor / (parc - 1);
    int k;
    float acrescimo, vtotal = primeira;
    for (k = 2; k <= parc; k++)
    {
        acrescimo = valor * outras;
        valor = acrescimo + valor;
        vtotal = valor + vtotal;
        printf("\nA %d° parcela é de R$%.2f", k, valor);
    }
    printf("\n");

    return vtotal;
}
void main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    int parc;
    printf("\nInsira o valor à ser financiado: ");
    scanf("%f", &valor);
    printf("Insira a quantidade de parcelas do financiamento: ");
    scanf("%d", &parc);

    printf("\nA 1° parcela é de R$%.2f", primeira(valor));
    float final = demais(valor, parc, primeira(valor));
    printf("\nO valor total pago pelo empréstimo é de: R$%.2f\n", final);
    printf("\nO valor de juros que está sendo pago é de: R$%.2f\n\n", (final - valor));

    system("pause");
}
