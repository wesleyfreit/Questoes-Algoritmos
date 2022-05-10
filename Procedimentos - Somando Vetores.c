
#include <stdio.h>

const int tamanho = 5;

void vetor(int vet[tamanho], int cont)
{
    int k;
    printf("\n| LENDO VETOR %d |\n\n", cont);
    for (k = 0; k < tamanho; k++)
    {
        printf("Informe o numero %d do vetor %d: ", k + 1, cont);
        scanf("%d", &vet[k]);
    }
}
void impressao(int vet[tamanho])
{
    int k;
    for (k = 0; k < tamanho; k++)
    {
        printf("%d ", vet[k]);
    }
    printf("\n");
}
void soma(int vetsoma[tamanho], int vet1[tamanho], int vet2[tamanho])
{
    int k;
    for (k = 0; k < tamanho; k++)
    {
        vetsoma[k] = vet1[k] + vet2[k];
    }
    printf("\n");
}
void main()
{
    int k, vet1[tamanho], vet2[tamanho], vetsoma[tamanho];
    int cont = 1;

    vetor(vet1, cont);

    cont++;
    vetor(vet2, cont);

    soma(vetsoma, vet1, vet2);

    printf("| IMPRESSAO |\n\n");

    printf("VETOR 1: ");
    impressao(vet1);
    printf("\n");

    printf("VETOR 2: ");
    impressao(vet2);
    printf("\n");

    printf("VETOR SOMA: ");
    impressao(vetsoma);
    printf("\n");
}