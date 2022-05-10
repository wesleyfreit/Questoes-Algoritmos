/* 3°. Escreva um programa C que leia três números inteiros positivos e calcule o Mínimo
Múltiplo Comum desses três números. O cálculo do MMC deve ser feito por meio de
um subprograma recursivo (devem ser passados três parâmetros, que correspondem
aos três números inteiros para o cálculo do MMC). Como dica, crie primeiro um
subprograma que receba como parâmetros três números inteiros positivos e encontre
o menor número maior ou igual a 2 que seja um divisor exato de pelo menos um
desses três números. */

#include <stdio.h>


int mdc(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
        return mdc(n2, n1 % n2);
}
int mmc(int n1, int n2)
{
    if (n1 == 0)
        return n2;
    else
        return n1 * n2 / mdc(n1, n2);
}

void main()
{
    int n1, n2, n3;
    printf("\nInsira tres numeros para efetuar um MMC: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("\n| O MMC de [%d, %d, %d] = %d.\n\n", n1, n2, n3, mmc(mmc(n1,n2), n3));
    
    system("pause");
}
