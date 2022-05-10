/*4°. Escreva um programa em C que leia um número inteiro N positivo e imprima a figura
abaixo. A impressão deve ser realizada por meio de um subprograma recursivo (deve
ser passado um número inteiro, que corresponde ao valor de N). */

#include <stdio.h>

const int vl = 1;

int asterisco(int min, int n)
{
    int x;
    printf("\n");
    for (x = 1; x <= min; x++)
        printf("%2c", '*');
    if (min == n)
        return min;

    return asterisco(min+1, n);
}

void main()
{
    int n;
    printf("\nInforme a quantidade de asteriscos a imprimir: ");
    scanf("%d", &n);

    printf("\n| IMPRESSAO |\n");
    asterisco(vl, n);

    printf("\n\n");
    system("pause");
}
