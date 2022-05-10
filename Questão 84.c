/* 84.	Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está dentro da faixa de peso adequada, ou se está abaixo 
ou acima do peso. Caso a pessoa esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar ou perder para ficar dentro da 
faixa adequada. Para resolver este programa, considere que o IMC ideal para uma pessoa deve estar entre 18 e 25.   */

#include <stdio.h>
#include <math.h>

const float imcMinIdeal = 18;
const float imcMaxIdeal = 24.99;

void main(){
    float peso, altura;
    printf("Insira o peso: ");
    scanf("%f", &peso);
    printf("Insira a altura: ");
    scanf("%f", &altura);

    if(peso >= 20 && peso <= 300 && altura >= 1 && altura <= 4){

        float imc = peso / pow(altura, 2);

        float valorImcAba = imcMinIdeal - imc;
        float valorImcAci = imc - imcMaxIdeal;

        float ganhaPeso = valorImcAba * pow(altura, 2);
        float perdePeso = valorImcAci * pow(altura, 2);

        if(imc < 18){
            printf("\nIMC abaixo da faixa, deve ganhar %.2f para ficar dentro da media.", ganhaPeso);
        }
        else if(imc >= 18 && imc <= 25){
            printf("\nIMC dentro da faixa adequada.");
        }
        else if(imc > 25 && imc <= 80){
            printf("\nIMC acima da faixa, deve perder %.2f para ficar dentro da media.", perdePeso);
        }
    }
    else{
        printf("\nInforme um valor correto.");
    }
}