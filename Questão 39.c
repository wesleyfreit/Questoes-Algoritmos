/* 39.	Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de transmissão 
da rede em KB/s e calcule o tempo aproximado necessário para a transmissão do arquivo. 
A resposta deve ser dada através de uma mensagem na forma X horas, Y minutos e Z segundos. */

#include <stdio.h>

void main()
{
    float mb, kbs;
    printf("Insira o valor em Mb para ser convertido: ");
    scanf("%f", &mb);
    printf("Insira a taxa de transmissao em Kb/s: ");
    scanf("%f", &kbs);

    float convMB = mb * 1024;
    int seg = convMB / kbs;


    if(convMB > 0 && kbs > 0)
    {
        int h = seg / 3600;
        int restH = seg % 3600;
        int m = restH / 60;
        int s = restH % 60;

        printf("\nA conversao estara completa em %d horas, %d minutos e %d segundos.", h, m, s);
    }
    else
    {
        printf("\nInsira um valor valido");
    }
}