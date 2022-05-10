#include <stdio.h>
#include <math.h>

const float maxImcIdeal = 24.99;
const float minImcIdeal = 18.5;

void main()
{
    printf("CALCULO DE IMC FEMININO OU MASCULINO DE 20 A 59 ANOS DE IDADE\n");
    float peso, altura;
    printf("\nInsira o peso em kg: ");
    scanf("%f", &peso);
    printf("Insira a altura em metros: ");
    scanf("%f", &altura);



    if(peso >= 20 && peso <= 300 && altura >= 1 && altura <= 4)
    {
        float imc = peso / pow(altura, 2);

        float pesoIdealGanha = minImcIdeal - imc;
        float pesoIdealPerde = imc - maxImcIdeal;

        float ganhaPeso = pesoIdealGanha * pow(altura, 2);
        float perdePeso = pesoIdealPerde * pow(altura, 2);

        if (imc < 18.5)
        {

            printf("\nIMC = %.2f, Abaixo do peso, precisa ganhar %.2fkg.", imc, ganhaPeso);
        }
        else if (imc >= 18.5 && imc < 25)
        {
            printf("\nIMC = %.2f, Dentro da faixa adequada.", imc);
        }
        else if (imc >= 25 && imc < 30)
        {
            printf("\nIMC = %.2f, Pre-obesidade, precisa perder %.2fkg.", imc, perdePeso);
        }
        else if (imc >= 30 && imc < 35)
        {
            printf("\nIMC = %.2f, Obesidade grau 1, precisa perder %.2fkg.", imc, perdePeso);
        }
        else if (imc >= 35 && imc < 40)
        {       
            printf("\nIMC = %.2f, Obesidade grau 2, precisa perder %.2fkg.", imc, perdePeso);
        }
        else if (imc >= 40 && imc <= 80)
        {     
            printf("\nIMC = %.2f, Obesidade grau 3, precisa perder %.2fkg.", imc, perdePeso);
        }
    }
    else
    {
        printf("\nInforme um valor correto.");
    }
    return 0;
}

