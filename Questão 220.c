/* 220.	Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu índice de massa corporal, 
que deve ser calculado através de um subprograma.  */

#include <stdio.h>
#include <locale.h>
#include <math.h>

float imc(float p, float a){
    return p / pow(a, 2);
}
void main(){
    float p, a;
    printf("\nInsira o Peso: ");
    scanf("%f", &p);
    printf("\nInsira a Altura: ");
    scanf("%f", &a);

    printf("\n | O IMC é: %.2f\n\n", imc(p, a), setlocale(LC_ALL, "Portuguese"));

    system("pause");
}
