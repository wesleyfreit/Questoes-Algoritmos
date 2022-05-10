/* 45.	Escreva um programa que leia os dois últimos valores da leitura de um medidor de energia em KWh e calcule o valor da conta de energia, 
considerando que: o preço de 1 KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de iluminação pública é de R$ 15,00. */

#include <stdio.h>

const float precoKwh = 0.35;
const float icms = 0.17;
const float ilumP = 15;

void main()
{
    float medidor;
    printf("Insira o valor em KWh do medidor de energia: ");
    scanf("%f", &medidor);

    float contaKwh = medidor * precoKwh;
    float contaIcms = contaKwh * icms;
    float contaF = contaKwh + contaIcms + ilumP;

    printf("\nA conta sera: \n\nConsumo KWh - %.2f \nTaxa ICMS - %.2f \nIlum. Pub. - %.2f \n\nTOTAL = %.2f", contaKwh, contaIcms, ilumP, contaF);
}