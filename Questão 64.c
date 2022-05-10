/* 64.	Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("\nO numero e positivo.");
    }
    else if(n < 0){
        printf("\nO numero e negativo.");
    }
    else{
        printf("\nO numero e neutro.");
    }
}
