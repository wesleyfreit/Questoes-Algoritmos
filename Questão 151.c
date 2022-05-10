/* 151.	Escreva um programa que leia o valor de uma precisão desejada pelo usuário e calcule o valor de Pi com esta
precisão. A aproximação é calculada através da equação Pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ..., e assim sucessivamente.
O processamento deve ser encerrado quando a variação entre os dois últimos valores calculados for inferior à precisão
desejada pelo usuário (Por exemplo 0.0001). */

#include <stdio.h>
#include <math.h>

void main()
{
    float precisao;

    printf("Insira a precisao desejada: ");
    scanf("%f", &precisao);

    float x = 1;
    float pi = 4;
    int cont = 1;
    float x1, diferenca, xant;

    do
    {
        x1 = pi / x;

        diferenca = (x1 - xant);

        if (diferenca < 0)
        {
            diferenca = diferenca * (-1);
        }
        cont++;

        x = x + 2;

        xant = x1;

        if (cont == 1)
        {
            pi = pi * (-1);
        }

        if (cont == 2)
        {
            pi = pi * (-1);
            cont = 0;
        }
        

    } while (diferenca >= precisao);

    printf("\nO valor de Pi na precisao %.6f eh = %.6f", precisao, x1);
}