/* */

#include <stdio.h>

int somaInt(int m, int n)
{
    int k, soma = 0;

    for (k = m; k <= n; k++)
    {
        soma = k + soma;
    }
    return soma;
}

void main()
{
    int m, n, k;

    printf("Insira o intervalo M: ");
    scanf("%d", &m);

    printf("Insira o intervalo N: ");
    scanf("%d", &n);

    int soma = somaInt(m, n);

    printf("\nA soma dos inteiros do intervalo: [%d, %d] = %d.", m, n, soma);
}