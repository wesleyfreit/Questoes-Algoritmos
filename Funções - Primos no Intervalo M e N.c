/* */

#include <stdio.h>

int divExt(int n)
{
    int k, cont = 0;

    for (k = 1; k <= n; k++)
    {
        if (n % k == 0)
        {
            cont++;
        }
    }
    return cont;
}

int primo(int n)
{

    int contador = divExt(n);
    if (contador == 2)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int m, n, k;

    printf("Insira o intervalo M: ");
    scanf("%d", &m);

    printf("Insira o intervalo N: ");
    scanf("%d", &n);

    printf("\n");

    for (k = m; k <= n; k++)
    {
        int id = primo(k);
        if (id == 1)
        {
            printf(" %d ", k);
        }
    }
}