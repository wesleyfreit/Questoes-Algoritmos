/* 93.	Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número lido é ou não um palíndromo. */

#include <stdio.h>

void main()
{
    int num, k;
    printf("Insira um numero entre 1000 e 9999: ");
    scanf("%d", &num);

    int resto = num;
    int div = 1000;
    int m = 1;
    int rev = 0;
    int mult = 0;
    int soma = 0;

    for (k = 1; k <= 4; k++)
    {
        rev = resto / div;
        resto = resto % div;

        mult = rev;
        mult = mult * m;
        soma = mult + soma;

        div = div / 10;
        m = m * 10;
    }

    if (num > 9999)
    {
        printf("\nInsira um numero ate 9999.");
    }
    else{
        if (num == soma)
        {
            printf("\nO numero %d ao contrario fica %d, e um palindromo.", num, soma);
        }
        else
        {
            printf("\nO numero %d ao contrario fica %d, nao e um palindromo.", num, soma);
        }

    }
    
}