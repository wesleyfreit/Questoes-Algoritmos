/* 11.	Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o 
valor informado pelo usuário em dólares.  */

#include <stdio.h>

void main()
{
    float cotDolar, real;
    printf("Insira o valor em reais: ");
    scanf("%f", &real);
    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f", &cotDolar);

    float conv = real / cotDolar;

    printf("\nO valor em dolar sera: U$%.2f", conv);

    return 0;
}