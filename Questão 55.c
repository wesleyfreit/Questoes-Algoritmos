/* 55.	Lázaro está muito feliz por ter enfim conseguido construir a sua casa própria. Sabendose que a construção durou 180 dias de trabalho, 
escreva um programa que leia o número de pedreiros que trabalhavam na obra, o número de ajudantes e o valor da diária do pedreiro e calcule 
quanto Lázaro gastou com mão de obra. Para resolver este programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da 
obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária do pedreiro.    */

#include <stdio.h>

int qntd = 180; // Duração da empeleita

void main()
{
    int numPedr, numAjud;
    float diariaPedr; 
    printf("Qual a quantidade de pedreiros na obra: ");
    scanf("%d", &numPedr);
    printf("Qual a quantidade de ajudantes na obra: ");
    scanf("%d", &numAjud);

    printf("Informe o valor da diaria do pedreiro: ");
    scanf("%f", &diariaPedr);

    float diariaAjd = diariaPedr / 2;

    float valorDiarioP = numPedr * diariaPedr;
    float valorDiarioA = numAjud * diariaAjd;

    float valorFinal = (valorDiarioP * qntd) + (valorDiarioA * qntd);

    printf("\nLazaro gastou R$%.2f com mao de obra em 180 dias de construcao.", valorFinal);
}