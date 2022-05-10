/* 219.	Escreva um programa que leia o valor total que um cliente consumiu em um restaurante e determine o valor final da sua conta, considerando que
o restaurante cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A conta deve ser calculada através de um subprograma. */

#include <stdio.h>
#include <locale.h>

const float couvert = 10;
const float porct = .1;

float conta(int n){
    float taxa = n * porct;
    return n + taxa + couvert;
}

void main(){    
    setlocale(LC_ALL, "Portuguese");

    float n;
    printf("\nInsira o valor que o cliente consumiu: ");
    scanf("%f", &n);

    printf("\n | A conta final do cliente é de: %.2f.\n\n", conta(n));

    system("pause");
}
