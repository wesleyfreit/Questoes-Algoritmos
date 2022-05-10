/* */

#include <stdio.h>

const int tam = 5;

int verify(int tamanho, int *vet, int n)
{
    int k, cont = 0;
    for (k = 0; k < tamanho; k++)
    {
        printf("Insira o numero %d do vetor: ", k+1);
        scanf("%d", &vet[k]);

        if(vet[k] == n){
            cont++;
        }
    }
    return cont;
}

void main()
{
    int n;
    int vet[tam];

    printf("Insira um numero inteiro N: ");
    scanf("%d", &n);
    printf("\n");

    int qntd = verify(tam, vet, n);

    printf("\nO numero %d aparece %dx no vetor.", n, qntd);
}