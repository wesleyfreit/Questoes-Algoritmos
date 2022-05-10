/* 18.	Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu cosseno.   */

#include <stdio.h>
#include <math.h>

void main()
{
    int seno;
    printf("Insira o seno do angulo: ");
    scanf("%d", &seno);
    
    float qrdC = 1 - pow(seno,2);
    float cosseno = sqrt(qrdC);

    if (cosseno == 0 || cosseno == 1)
    {
        printf("Cosseno = %.0f", cosseno);
    }
    else
    {
        printf("Valor nao existe");
    }
    return 0;
}