/* 68.	Escreva um programa que leia o valor do salário bruto de um empregado e calcule o seu salário líquido. Para calcular o valor 
do salário líquido, deve-se primeiramente descontar uma taxa de 11%, correspondente ao valor da contribuição previdenciária. Depois, 
do valor restante, deve-se descontar o valor do imposto de renda, que varia de acordo com o valor do salário. O percentual que deve ser 
descontado para o imposto de renda varia de acordo com a tabela abaixo.   */

#include <stdio.h>

const float taxa11 = 0.11;
const float taxa7 = 0.075;
const float taxa15 = 0.15;
const float taxa22 = 0.225;
const float taxa27 = 0.275;


void main()
{
    float salBrut;
    printf("Insira o salario bruto do trabalho: ");
    scanf("%f", &salBrut);

    float taxaPrev = salBrut * taxa11;
    float ipR = 0;
    float salLiq = 0;

    if(salBrut >= 0 && salBrut <= 1903.98){
        salLiq = salBrut - taxaPrev;
        printf("\nO salario liquido e de R$%.2f", salLiq);
    }
    if(salBrut >= 1903.99 && salBrut <= 2826.65 ){
        ipR = salBrut * taxa7;
        salLiq = salBrut - ipR - taxaPrev;
        printf("\nO salario liquido e de R$%.2f", salLiq);
    }
    if(salBrut >= 2826.66 && salBrut <= 3751.05){
        ipR = salBrut * taxa15;
        salLiq = salBrut - ipR - taxaPrev;
        printf("\nO salario liquido e de R$%.2f", salLiq);         
    }
    if(salBrut >= 3751.06 && salBrut <= 4664.68 ){
        ipR = salBrut * taxa22;  
        salLiq = salBrut - ipR - taxaPrev;
        printf("\nO salario liquido e de R$%.2f", salLiq);        
    }
    if(salBrut >= 4664.69 ){
        ipR = salBrut * taxa27;
        salLiq = salBrut - ipR - taxaPrev;
        printf("\nO salario liquido e de R$%.2f", salLiq);   
    }
    else if(salBrut < 0){
        printf("\nInsira um valor valido.");
    }
}
