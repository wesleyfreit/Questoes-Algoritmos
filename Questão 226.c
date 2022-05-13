/* 226.	Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro.
Esta verificação deve ser realizada através de um subprograma.  */
#include <stdio.h>
#include <locale.h>

int verificador(int n)
{
    if (n < 0)
    {
        printf("\nÉ negativo.\n\n");
    }
    else if (n > 0)
    {
        printf("\nÉ positivo.\n\n");
    }
    else
    {
        printf("\nÉ neutro.\n\n");
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, m;
    printf("Insira um número N: ");
    scanf("%d", &n);

    verificador(n);

    system("pause");
}