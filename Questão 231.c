/* Escreva um programa que leia um vetor de 10 números inteiros e identifique o menor número, o maior número e a média
aritmética de todos os números armazenados no vetor. Cada uma dessas informações devem ser calculadas por meio de um
subprograma. */

#include <stdio.h>

const int t = 10;

int maior(int vet[t], int *n){
    int k;
    for (k = 0; k < t; k++){
        if (vet[k] > *n)
            *n = vet[k];
    }
    return *n;
}
int menor(int vet[t], int n){
    int k;
    for (k = 0; k < t; k++){
        if (n > vet[k])
            n = vet[k];
    }
    return n;
}
float media(int vet[t], float n){
    n = 0;
    int k;
    for (k = 0; k < t; k++)
        n = vet[k] + n;
    n = n / t;
    return n;
}
void main(){
    int vet[t], k;
    for (k = 0; k < t; k++){
        printf("Insira o numero %d do vetor: ", k + 1);
        scanf("%d", &vet[k]);
    }

    int n = 0;

    printf("\nO maior numero eh = %d\n", maior(vet, &n));
    printf("\nO menor numero eh = %d\n\n", menor(vet, n));

    n = (float)n;
    printf("\nA media aritmetica de todos os numeros do vetor eh = %.2f\n\n", media(vet, n));

    system("pause");
}