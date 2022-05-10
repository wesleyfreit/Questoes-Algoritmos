/* 115.	Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o 
percentual de pessoas que estão dentro da faixa de peso adequada.  */

#include <stdio.h>
#include <math.h>

void main()
{
    int k;
    int contAb = 0;
    int contMe = 0;
    int contAc = 0;

    for (k = 1; k <= 20; k++)
    {

        float altura, peso;
        printf("\nInsira o peso e altura da pessoa num. %d: ", k);
        scanf("%f%f", &peso, &altura);

        float imc = peso / pow(altura, 2);
        printf("imc = %f", imc);

        if (imc < 18.5)
        {
            contAb++;
            printf("\n Ab %d", contAb);
        }
        else if (imc >= 18.5 && imc < 25)
        {
            contMe++;
            printf("\n Me %d", contMe);
        }
        else if (imc >= 25)
        {
            contAc++;
            printf("\n Ac %d", contAc);
        }
    }

    contAb = contAb * 5;
    contAc = contAc * 5;
    contMe = contMe * 5;

    printf("\nPercentual abaixo do peso = %d porcento das pessoas", contAb);
    printf("\nPercentual acima do peso = %d porcento pessoas", contAc);
    printf("\nPercentual dentro da faixa de peso = %d porcento pessoas", contMe);
}
