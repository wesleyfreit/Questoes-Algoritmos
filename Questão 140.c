/* 140.	Escreva um programa que leia vários números inteiros e calcule a média dos números pares e a média dos números
ímpares. O processamento deverá ser encerrado quando for lido o valor 0, que não deverá ser processado. */

#include <stdio.h>

const int div = 10;

void main()
{
    int n;
    int par = 0;
    int impar = 0;
    int contP = 0;
    int contI = 0;
    do
    {
        printf("Insira um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0 && n != 0)
        {
            par = n + par;
            contP++;
        }
        else if(n % 2 > 0)
        {
            impar = n + impar;
            contI++;
        }
    } while (n != 0);

    float convP = (float)par;
    convP = convP / contP;

    float convI = (float)impar;
    convI = convI / contI;

    printf("\nSao %d numeros pares.", contP);
    printf("\nA media da soma dos numeros pares e = %.2f", convP);
    printf("\n\nSao %d numeros impares.", contI);
    printf("\nA media da soma dos numeros impares e = %.2f", convI);
}