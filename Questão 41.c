/* 41.	Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário de uma empresa durante um mês
 e o valor de cada hora trabalhada e determine o seu pagamento. O programa deve considerar que a carga-horária mensal do 
 funcionário é de 160 horas e que o valor de cada hora extra corresponde ao valor da hora trabalhada acrescido de uma taxa 
 de 50%.  Para resolver a questão, considere que a quantidade de horas trabalhadas nunca será inferior a 160. */
#include <stdio.h>

const int horasMen = 160;

void main()
{
    int horas;
    float vH;
    printf("Insira a quantidade de horas trabalhadas pelo funcionario no mes: ");
    scanf("%d", &horas);
    printf("Insira o valor da hora trabalhada: ");
    scanf("%f", &vH);

    if(horas < 160)
    {
        printf("A quantidade de horas trabalhadas mensais nunca sera inferior a 160 horas");
    }
    else
    {
        float horaExtr = horas - horasMen;
        float salarioExtr = ((vH * 0.5) + vH) * horaExtr;

        float salario = (horasMen * vH) + salarioExtr;

        printf("\nO salario sera R$%.2f.", salario);
    }
}