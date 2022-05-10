/* 144.	Escreva um programa que leia um número inteiro N e calcule o primeiro número natural cujo fatorial é maior do que N.  */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int valor = 1;
    int fatorial = 0;
    int num = 0;

    while (fatorial <= n)
    {

        num = 1;
        fatorial = valor;
        int sub = valor;
        while (num < valor)
        {
            fatorial = fatorial * (sub - num);
            num++;
        }

        valor++;
    }
    printf("\nFatorial de %d! = %d, e maior que N = %d.", num, fatorial, n);
}
