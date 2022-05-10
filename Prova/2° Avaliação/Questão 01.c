/* 1°. Escreva um programa em C que leia um vetor dez caracteres e verifique se o vetor é ou não um palíndromo. 
A verificação deve ser feita por meio de um comando de repetição.*/

#include <stdio.h>
#include <string.h>

const int tam = 10;

void main()
{
    char vet[tam];
    int i;

    for (i = 0; i < tam; i++)
    {
        fflush(stdin);
        system("cls");
        printf("Informe o caractere num. %d: ", i + 1);
        scanf("%c", &vet[i]);
        system("cls");
    }
    printf("\nO vetor informado foi: \n\n ");
    for (i = 0; i < tam; i++)
    {
        printf("%c", vet[i]);
    }

    int pos = tam - 1;
    int palindromo = 1;

    for (i = 0; i < tam / 2; i++)
    {
        if (vet[i] != vet[pos])
        {
            palindromo = 0;
            break;
        }
        pos--;
    }
    if (palindromo == 1)
    {
        printf("\n\nO vetor e um palindromo.");
    }
    else
    {
        printf("\n\nO vetor nao e um palindromo.");
    }
}