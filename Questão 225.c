/* 225.	Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M.
Esta verificação deve ser realizada através de um subprograma. */
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
    printf("Insira um número N: ");
    scanf("%d", &n);
    printf("Insira um número M: ");
    scanf("%d", &m);

    int x = verificador(m, n);
    if (x == 1)
        printf("\n%d é multiplo de %d\n\n", n, m);
    else
    {
        printf("\n\n%d não é multiplo de %d\n\n", n, m);
    }

    system("pause");
}