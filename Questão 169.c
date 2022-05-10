/* 169.	Escreva um programa que leia um texto digitado pelo usuário até ler o caractere enter, que não deve ser processado.
O programa deve imprimir quantas vezes cada letra foi digitada. (lembre-se, os caracteres ‘a’ e ‘A’) representam uma única
letra. Se você for usar a linguagem pascal, use o comando readkey para a leitura dos dados. */

#include <stdio.h>
#include <string.h>

const int tam = 26;

void main()
{
    int vet[26];
    char texto[200];
    int k;

    for (k = 0; k < tam; k++)
    {
        vet[k] = 0;
    }
    printf("Insira um texto ou frase qualquer: ");
    gets(texto);

    int tamanho = strlen(texto);

    for (k = 0; k < tamanho; k++)
    {
        if (texto[k] >= 'a' && texto[k] <= 'z')
        {
            int conv = (int)texto[k];
            int posicaoVet = conv - 97;
            vet[posicaoVet]++;
        }
        if (texto[k] >= 'A' && texto[k] <= 'Z')
        {
            int conv = (int)texto[k];
            int posicaoVet = conv - 65;
            vet[posicaoVet]++;
        }
    }
    int alf = 97;
    printf("\nOcorrencias:");

    for (k = 0; k < tam; k++)
    {
        if (vet[k] > 0)
        {
            int conv = (char)alf;
            printf("\n%c = ", conv);
            alf++;
            printf("%d", vet[k]);
        }
    }
}
