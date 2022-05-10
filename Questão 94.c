/* 94.	Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique quantas cédulas de cada tipo devem ser usadas 
para que o saque seja efetuado. Você pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O valor máximo de um 
saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso das cédulas maiores. */

#include <stdio.h>

void main()
{
    int saque;
    printf("Insira quanto quer sacar, o valor maximo de saque e R$1000,00: ");
    scanf("%d", &saque);

    int v100 = saque / 100;
    int rest = saque % 100;
    int v50 = rest / 50;
    int rest2 = rest % 50;
    int v20 = rest2 / 20;
    int rest3 = rest2 % 20;
    int v10 = rest3 / 10;
    int resto = rest3 % 10;

    
    printf("\nSaque:");

    if(v100 > 0)
        printf("\n%d notas de R$100,00",v100);
    if(v50 > 0)
        printf("\n%d notas de R$50,00",v50);
    if(v20 > 0)
        printf("\n%d notas de R$20,00",v20);
    if(v10 > 0)
        printf("\n%d notas de R$10,00",v10);
    if(resto > 0)
        printf("\nVoltam R$%d,00 para conta pois nao temos notas para sacar este valor.",resto);
}