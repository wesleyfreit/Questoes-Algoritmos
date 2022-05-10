/* 46.	Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu reverso. 
Você deve sempre considerar que o número lido tem três algarismos. Desta forma, o reverso de 195 deve ser 591, 
o de 768 deve ser 867, de 3 deve ser 300, o de 40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. 
O programa deve armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário.   */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero para calcular o reverso: ");
    scanf("%d", &n);

    if(n >= 0 && n <= 999)
    {
        int num1 = n / 100;
        int rest1 = n % 100;
        int num2 = rest1 / 10;
        int num3 = rest1 % 10;

        int reverso = (num3 * 100) + (num2 * 10) + num1;

        printf("\nO reverso de %d e %d", n, reverso);
    }
    else
    {
        printf("\nInsira um numero entre 0 e 999.");
    }
}