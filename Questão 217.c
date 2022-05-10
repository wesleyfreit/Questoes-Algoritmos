/* 217.	Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da unidade de milhar, da centena,
da dezena e da unidade. O programa deve ter subprogramas para calcular cada informação solicitada. */

#include <stdio.h>
#include <locale.h>

int m(int n)
{
    return n / 1000;
}
int c(int n)
{
    n = n / 100;
    return n % 10;
}
int d(int n)
{
    n = n % 100;
    return n / 10;
}
int u(int n)
{
    return n % 10;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("\nInsira um número positivo entre 1 e 9999: ");
    scanf("%d", &n);

    printf("\n | A conversão de %d para unidade é:\n", n);
    printf("\n   %d - M", m(n));
    printf("\n   %d - C", c(n));
    printf("\n   %d - D", d(n));
    printf("\n   %d - U\n\n", u(n));

    system("pause");
}
