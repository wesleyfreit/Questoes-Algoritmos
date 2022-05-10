/* 97.	Escreva um programa que leia as horas, os minutos e o fuso horário e converta o horário lido para o fuso horário informado. O fuso horário deve ser informado como um número inteiro. 
Caso o valor seja positivo, o programa deve considerar que o fuso horário digitado é maior do que o atual. Caso o valor seja negativo, o programa deve considerar que o fuso horário é menor do 
que o atual. Caso o valor seja 0, o programa deve considerar que o fuso horário é o mesmo do atual. A resposta do programa deve ser dada no formato hh:mm hs. Por exemplo, se o horário lido foi 
10 h e 30 min e o fuso horário for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o horário lido foi 10 h e30 min e o fuso horário for -4, a resposta do programa deve ser 06:30 hs. 
Se o horário lido for 22 h e 30 min e o fuso-horário for 3, a resposta deve ser 01:30 hs. Se o horário lido for 2 h e 30 min e o fuso horário for -3, a resposta deve ser 23:30 hs. 
O horário referente à meia-noite deve ser representado da forma 00:00 hs.  */

#include <stdio.h>

void main()
{
    int h, m, f;
    printf("Insira a(s) hora(s): ");
    scanf("%d", &h);
    printf("Insira o(s) minuto(s): ");
    scanf("%d", &m);
    printf("Insira o fuso horario: ");
    scanf("%d", &f);

    int min = m / 60;
    int somaF = h + f + min;
    int dia = 24;

    if (h <= 24 && h >= 0 && f >= -12 && f <= 12 && m <= 60 && m >= 0)
    {
        if (somaF < 0)
        {
            dia = dia + somaF;

            printf("\nO resultado convertido sera ");
            if (dia < 9)
            {
                printf("0");
            }
            printf("%d:", dia);
            if (m < 9)
            {
                printf("0");
            }
            if (m == 60)
            {
                printf("00 hrs");
            }
            else
            {
                printf("%d hrs", m);
            }
        }
        else if (somaF >= 0 && somaF <= 24)
        {
            printf("\nO resultado convertido sera ");
            if (dia < 9)
            {
                printf("0");
            }
            printf("%d:", somaF);
            if (m < 9)
            {
                printf("0");
            }
            if (m == 60)
            {
                printf("00 hrs");
            }
            else
            {
                printf("%d hrs", m);
            }
        }
        else if (somaF >= 0 && somaF > 24)
        {
            int rest = somaF % 24;

            printf("\nO resultado convertido sera ");
            if (dia < 9)
            {
                printf("0");
            }
            printf("%d:", rest);
            if (m < 9)
            {
                printf("0");
            }
            if (m == 60)
            {
                printf("00 hrs");
            }
            else
            {
                printf("%d hrs", m);
            }
        }
    }
    else
    {
        printf("Insira um valor verdadeiro para hora, minutos e fuso horario.");
    }
}
