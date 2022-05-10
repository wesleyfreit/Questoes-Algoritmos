/*  27.	Escreva um programa que leia o comprimento e a largura de uma cisterna e a quantidade
de litros que o usuário deseja armazenar na mesma e determine quantos metros ele deve encher a
cisterna para obter a quantidade de litros desejada.  */

#include <stdio.h>

void main()
{
    float comp, larg, qntL;
    printf("Insira a largura da cisterna: ");
    scanf("%f", &larg);
    printf("Insira o comprimento da cisterna: ");
    scanf("%f", &comp);
    printf("Quantidade de litros que quer armazenar nela: ");
    scanf("%f", &qntL);

    float m3 = qntL / 1000;
    float m2 = comp * larg;
    float cF = m3 / m2;

    printf("\nEle deve encher %.2f m de altura para atingir volume desejado.", cF);

    return 0;
}