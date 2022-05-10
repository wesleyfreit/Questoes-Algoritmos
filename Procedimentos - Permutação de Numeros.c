/* */

#include <stdio.h>

const int tam = 10;

void permuta(int vet[tam], int m, int n){
    aux = vet[m];
    vet[m] = vet[n];
    vet[n] = aux;

}
void main(){
    int m, n, k, vet[tam];

    for(k = 0; k < tam; k++)
    {
        printf("Insira os numeros do vetor: ");
        scanf("%d", &vet[k]);
    }
    printf("\nInsira as posicoes que deseja trocar no vetor: ");
    scanf("%d%d", &m, &n);

    permuta(vet,m-1, n-1);
    for(k = 0; k < tam; k++){
        printf("%d", vet[k]);
    }
}
    

