/* 49.	Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta revendedora, o preço de um veículo 
é calculado através do seu preço de compra, mais uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. 
Nesta promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações, escreva um programa que leia o 
preço atual de um veículo e calcule qual deve ser o seu preço na promoção.    */

#include <stdio.h>

const float IPI = 20;
const float mLucro = 20;
const float PorctLucroF = 120;
const float PorctLucroSemMlucro = 137;


void main()
{
    float precoAt;
    printf("Informe o preco atual do veiculo: ");
    scanf("%f", &precoAt);

    float vMlucro = ((precoAt * mLucro) / -PorctLucroF) + precoAt;
    float vSIPI = ((vMlucro * IPI) / -PorctLucroSemMlucro) + vMlucro;

    float vProm = (vSIPI * PorctLucroF) / 100;

    printf("\nO veiculo esta por R$%.2f nesta promocao.", vProm);

}

