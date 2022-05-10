#include <stdio.h>

const int qntN = 5;

int fatorial(int n)
{
    int k;
    int fator = 1;
    for (k = 1; k <= n; k++)
    {
        fator = fator * k;
    }
    return fator;
}
void main()
{
    int n, k;
    for (k = 1; k <= qntN; k++)
    {
        printf("Insira um numero para fatoriar: ");
        scanf("%d", &n);

        int vfatorial = fatorial(n);

        printf("\nO fatorial de %d! eh = %d.\n\n", n, vfatorial);
    }
}