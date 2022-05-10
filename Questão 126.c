/* 126.	Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um número N e 
verifique se o número N pertence à progressão.  */

#include <stdio.h>

void main()
{
    int n, raz, termo;
    printf("Insira o termo inicial da progressao: ");
    scanf("%d", &termo);

    printf("Insira a razao: ");
    scanf("%d", &raz);

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    while (termo != n)
    {
        termo = raz + termo;
        if (termo == n)
        {
            printf("\nO numeral %d pertence a progressao", n);
            break;
        }
        else if (termo > n)
        {
            printf("\nO numeral %d nao pertence a progressao", n);
            break;
        }
    }
}