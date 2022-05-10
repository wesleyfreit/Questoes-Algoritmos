#include <stdio.h>
#include <math.h>

const int valorMax = 1000;

void main()
{
    int valor, k;
    printf("O valor a ser sacado sera: ");
    scanf("%d", &valor);

    if(valor > 0)
    {
        if(valor > valorMax)
        {
            printf("\nO valor maximo de saque e de R$1000,00.");
        }
        else
        {
            int qnt1 = valor / 100;
            int rest1 = valor % 100;

            int qnt2 = rest1 / 50;
            int rest2 = rest1 % 50;

            int qnt3 = rest2 / 20;
            int rest3 = rest2 % 20;

            int qnt4 = rest3 / 10;
            int rest4 = rest3 % 10;

            int qnt5 = rest4 / 5;
            int rest5 = rest4 % 5;

            int qnt6 = rest5 / 2;
            int rest6 = rest5 % 2;


            if (qnt1 > 0)
            {
                printf("\n%d nota(s) de R$100", qnt1);
            }
            if (qnt2 > 0)
            {
                printf("\n%d nota(s) de R$50", qnt2);
            }
            if (qnt3 > 0)
            {
                printf("\n%d nota(s) de R$20", qnt3);
            }
            if (qnt4 > 0)
            {
                printf("\n%d nota(s) de R$10", qnt4);
            }
            if (qnt5 > 0)
            {
                printf("\n%d nota(s) de R$5", qnt5);
            }
            if (qnt6 > 0)
            {
                printf("\n%d nota(s) de R$2", qnt6);
            }
            if (rest5 % 2 > 0)
            {   
                printf("\n%d moeda(s) de R$1", rest6);
            }
        }
    }
    else
    {
        printf("\nInforme um valor correto.");
    }
}
