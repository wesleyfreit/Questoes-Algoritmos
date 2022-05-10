/* 83.	Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número lido por extenso.  */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro entre 1 e 10: ");
    scanf("%d", &n);

    if(n == 1){
        printf("\nUm");
    }
    else if(n == 2){
        printf("\nDois");
    }
    else if(n == 3){
        printf("\nTres");
    }
    else if(n == 4){
        printf("\nQuatro");
    }
    else if(n == 5){
        printf("\nCinco");
    }
    else if(n == 6){
        printf("\nSeis");
    }
    else if(n == 7){
        printf("\nSete");
    }
    else if(n == 8){
        printf("\nOito");
    }
    else if(n == 9){
        printf("\nNove");
    }
    else if(n == 10){
        printf("\nDez");
    }
    else{
        printf("O numero informado e maior ou menor que o pedido, tente novamente.");
    }
}
