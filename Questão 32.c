/* 32.	O carro de João consegue percorrer em média 14 km consumindo 1 litro de combustível. 
Escreva um programa que leia o valor da distância que João vai percorrer durante uma viagem e 
o preço atual de um litro de combustível e calcule quanto ele deverá gastar com combustível 
durante a viagem. */

#include <stdio.h>

const float d1Lcomb = 30.00;

void main()
{
    float pComb, distance;
    printf("Insira a distancia percorrida em km: ");
    scanf("%f", &distance);
    printf("Insira o preco atual do combustivel: ");
    scanf("%f", &pComb);

    float valorG = (pComb * distance) / d1Lcomb;

    printf("\nJoao ira gastar R$%.2f com gasolina", valorG);

    return 0;
}