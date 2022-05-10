/*25.	Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros elementos
da sua tabuada. A saída do programa deve seguir o formato abaixo, que mostra os 5 primeiros elementos da tabuada do 2. */

#include <stdio.h>

void main()
{
    int n, k, razao;
    printf("Insira  um numero: ");
    scanf("%d", &n);

    int tab = n;

    for (k = 1; k <= 10; k++)
    {
        n = tab * k;
        printf("%d x %d = %d\n", k, tab, n);
    }

    return 0;
}
