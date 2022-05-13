/* 225.	Escreva um programa que leia dois n�meros inteiros M e N e verifique se N � m�ltiplo de M.
Esta verifica��o deve ser realizada atrav�s de um subprograma. */
#include <stdio.h>
#include <locale.h>

int verificador(int m, int n)
{
    int k, multiplicador = 0, x;
    for (k = 1; k <= m; k++)
    {
        x = multiplicador * n;
        if (x == m)
        {
            return 1;
            break;
        }
        multiplicador++;
    }
    return 0;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, m;
    printf("Insira um n�mero N: ");
    scanf("%d", &n);
    printf("Insira um n�mero M: ");
    scanf("%d", &m);

    int x = verificador(m, n);
    if (x == 1)
        printf("\n%d � multiplo de %d\n\n", n, m);
    else
    {
        printf("\n\n%d n�o � multiplo de %d\n\n", n, m);
    }

    system("pause");
}