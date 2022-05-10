/* ESCREVA UM SUBPROGRAMA RECURSIVO QUE RECEBA UMA MATRIZ QUADRADA DE ORDEM 5 DE NUMEROS INTEIROS E UM NUMERO INTEIRO N
E CALCULE A SOMA DOS N PRIMEIROS VALORES DA SUA DIAGONAL PRINCIPAL */
#include <stdio.h>

const int ordem = 5;

int somaDiagonal(int mat[ordem][ordem], int n)
{

    if (n == 1)
    {
        return mat[0][0];
    }
    return mat[n - 1][n - 1] + somaDiagonal(mat, n - 1);
}

void main()
{
    int mat[ordem][ordem];
    int n, k, x;

    for (k = 0; k < ordem; k++)
    {
        for (x = 0; x < ordem; x++)
        {
            printf("Insira um numero da matriz: ");
            scanf("%d", &mat[k][x]);
        }
    }
    printf("\nA matriz informada foi:\n\n");
    
    for (k = 0; k < ordem; k++)
    {
        for (x = 0; x < ordem; x++)
        {
            printf("%5d", mat[k][x]);
        }
        printf("\n\n");
    }

    printf("\nInsira até qual diagonal da matriz voce quer somar: ");
    scanf("%d", &n);

    int resultado = somaDiagonal(mat, n);

    printf("\nA soma das diagonais da matriz a partir de %d eh = %d.", n, resultado);
}