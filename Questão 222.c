/* 222.	O Banco do Povo est� realizando uma grande promo��o em seus financiamentos. Ele financia qualquer valor em 5 presta��es.
O valor da primeira presta��o corresponde � 20% do valor do empr�stimo. Os valores das demais presta��es correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e
calcule: o valor de cada presta��o, o valor total que o cliente vai pagar pelo empr�stimo e o total de juros que o cliente vai
pagar pelo empr�stimo. O programa deve ter um subprograma para calcular o valor de cada parcela do empr�stimo.*/

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
        printf("\nA %d� parcela � de R$%.2f", k, valor);
    }
    printf("\n");

    return vtotal;
}
void main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    int parc;
    printf("\nInsira o valor � ser financiado: ");
    scanf("%f", &valor);
    printf("Insira a quantidade de parcelas do financiamento: ");
    scanf("%d", &parc);

    printf("\nA 1� parcela � de R$%.2f", primeira(valor));
    float final = demais(valor, parc, primeira(valor));
    printf("\nO valor total pago pelo empr�stimo � de: R$%.2f\n", final);
    printf("\nO valor de juros que est� sendo pago � de: R$%.2f\n\n", (final - valor));

    system("pause");
}
