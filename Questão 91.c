/* 91.	Escreva um programa que leia o valor de um mês e de um ano e verifique a quantidade de dias do mês informado pelo usuário.  */

#include <stdio.h>

void main()
{
    int m, ano;
    printf("Insira um mes de 1 a 12: ");
    scanf("%d", &m);
    printf("Insira o ano: ");
    scanf("%d", &ano);

    int qntD = 30;
    int bix = ano % 4;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        qntD = qntD+1;
        printf("\nO mes tem %d dias", qntD);
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        printf("\nO mes tem %d dias.", qntD);
    }
    switch(m){
        case 2:
            if(bix == 0){
                printf("\nO mes tem 29 dias.");
            }
            else{
                printf("\nO mes tem 28 dias.");
            }
            break;
        default:
            printf("\nInsira numeros corretos.");
            break;
    }

}