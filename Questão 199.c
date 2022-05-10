/* 199.	Escreva um programa que leia três números inteiros e calcule a sua média aritmética. 
O cálculo da média deve ser realizado através de um subprograma. */

#include <stdio.h>

float media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}
void main(){
    float n1, n2, n3;

    printf("Informe as tres notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    float valMedia = media(n1,n2,n3);
    
    printf("\nA media aritmetica eh = %.2f", valMedia);
}
