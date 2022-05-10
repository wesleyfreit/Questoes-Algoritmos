/* 57.	Escreva um programa que leia o valor de uma passagem em reais e em milhas e, em seguida, leia o valor da passagem 
(em reais) que Caio deseja comprar e calcule quantas milhas ele precisa juntar para que ele não precise pagar pela passagem. 
Para resolver este programa, considere que a proporção entre o valor da milha e o valor em reais é a mesma para todos os 
vôos da companhia aérea. */

#include <stdio.h>

void main()
{
    float reais;
    int milhas;

    printf("Insira o valor da passagem em reais: ");
    scanf("%f", &reais);
    printf("Insira o valor da mesma passagem em milhas: ");
    scanf("%d", &milhas);

    float passagem;
    printf("\nInsira o valor da passagem que Caio deseja comprar: ");
    scanf("%f", &passagem);

    float divisao = milhas / reais;
    int vMilhas = divisao * passagem;

    printf("\nCaio precisa acumular %d milhas para comprar a passagem.", vMilhas);
}
