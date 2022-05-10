/* 85.	Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e aplique o operador lido aos dois operandos, na ordem 
em que os mesmos foram digitados.  */

#include <stdio.h>
#include <string.h>

void main()
{
    float n1, n2;
    char op;
    printf("Insira um numero: ");
    scanf("%f", &n1);

    fflush(stdin);
    printf("Insira outro numero: ");
    scanf("%f", &n2);

    fflush(stdin);
    printf("Insira o operador: ");
    scanf("%c", &op);

    float operacao = 0;

    switch (op)
    {
    case '+':
        operacao = n1 + n2;
        printf("\n%.0f + %.0f = %.0f", n1, n2, operacao);
        break;
    case '-':
        operacao = n1 - n2;
        printf("\n%.0f - %.0f = %.0f", n1, n2, operacao);
        break;
    case '*':
        operacao = n1 * n2;
        printf("\n%.0f x %.0f = %.0f", n1, n2, operacao);
        break;
    case '/':
        if (n2 != 0)
        {
            operacao = n1 / n2;
            printf("\n%.0f / %.0f = %.2f", n1, n2, operacao);
        }
        else
        {
            printf("Nao existe divisao por 0.");
        }
        break;
    default:
        printf("\nInsira um operador correto.");
        break;
    }
}