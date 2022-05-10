/* 267.	Escreva um subprograma recursivo que receba como entrada um vetor de 10 números inteiros, um número inteiro N 
entre 1 e 10 e um número inteiro X e verifique quantas vezes o número X aparece no vetor a partir da posição N. 
*/
#include <stdio.h>

const int tam = 10;

int frequencia(int vet[tam], int n, int pos)
{
    if (pos == tam-1 && vet[pos] == n)
    {
        return 1;
    }
    if (pos == tam-1)
    {
        return 0;
    }
    if(vet[pos] == n){
        return 1 + frequencia(vet, n, pos+1);
    }
    return frequencia(vet, n, pos+1);
}

void main()
{
    int vet[tam];
    int n, k, pos;

    for (k = 0; k < tam; k++)
    {
        printf("Insira o numero %d do vetor: ", k+1);
        scanf("%d", &vet[k]);
    }

    printf("\nInsira um numero que voce quer saber quantas vezes aparece no vetor: ");
    scanf("%d", &n);

    printf("\nInsira a partir de qual posicao voce quer saber se tem o numero N no vetor: ");
    scanf("%d", &pos);

    int resultado = frequencia(vet, n, pos);

    printf("\nO numero %d aparece %dx no vetor.", n, resultado);


}