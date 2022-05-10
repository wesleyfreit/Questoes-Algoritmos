#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int qnt = 0;
    int contador = n;
    int divisor = 10;

    printf("\nA soma dos algarimos de %d, sera assim:\n", n);

    do
    {
        contador = contador % divisor;
        printf("%d", contador);
        qnt = qnt + contador;
        contador = n / divisor;
        if (contador != 0)
        {
            if (n > 0)
            {
                printf(" +");
            }
            else
            {
                printf(" ");
            }
        }
        n = contador;

    } while (n != 0);

    printf(" = %d", qnt);
}
