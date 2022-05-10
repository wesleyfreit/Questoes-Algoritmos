/* 44.	Escreva um programa que leia individualmente os valores dos quatro 
dígitos de um valor em binário e calcule o seu valor correspondente em decimal.  */

#include <stdio.h>
#include <math.h>

void main()
{
    int v1, v2, v3, v4, v5, v6;
    printf("Insira os valores em binario: ");
    scanf("%d%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5, &v6);

    int dc1 = v1 * pow(2, 5);
    printf("%d", dc1);
    int dc2 = v2 * pow(2, 4);
    int dc3 = v3 * pow(2, 3);
    int dc4 = v4 * pow(2, 2);
    int dc5 = v5 * pow(2, 1);
    int dc6 = v6 * pow(2, 0);
    int rF = dc1 + dc2 + dc3 + dc4 + dc5 + dc6;

    printf("\nO valor em decimal sera %d", rF);

    return 0;
}