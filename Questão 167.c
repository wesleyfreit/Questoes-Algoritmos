/* 167.	Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor lido em ordem crescente.  */

#include <stdio.h>
#include <locale.h>

const int tam = 4;

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int k, vet[tam], maior = 0;
    for (k = 0; k < tam; k++)
    {
        printf("Insira um número do vetor: ");
        scanf("%d", &vet[k]);
        if (vet[k] > maior)
            maior = vet[k];
    }
    printf("\nO vetor em ordem crescente ficará assim: \n\n");
    int x = 0, vl = 0;
    while (x < tam)
    {
        printf("%3d", maior);
        for (k = 0; k < tam; k++){
            if (vl < vet[k] && vet[k] < maior)
                vl = vet[k];
            if (k == tam - 1)
                maior = vl;
        }
        vl = 0;
        x++;
    }
    printf("\n\n");
    system("pause");
}