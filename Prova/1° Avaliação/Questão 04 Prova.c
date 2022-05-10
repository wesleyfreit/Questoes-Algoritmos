#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro para saber se pertence ou nao a tabela Fibonacci: ");
    scanf("%d", &n);

    int pen = 0;
    int ult = 1;
    int prox = 0;

    if ( n >= 0)
    {
        printf("\nTabela : %d ", ult);
    }
    while (n > prox)
    {
        prox = pen + ult;
        pen = ult;
        ult = prox;
        if (pen <= n)
        {
            printf("-");
        }
        printf(" %d ", ult);
    }

    if (n == 0 || n == prox)
    {
        printf("< Pertence!");
    }
    else
    {
        printf(" | Nao pertence!");
    }
}
