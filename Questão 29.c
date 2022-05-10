/* 29.	Escreva um programa que leia o número total de questões
existentes em uma prova e o número de questões que um candidato 
acertou e determine o seu percentual de acertos e o seu percentual de erros. */

#include <stdio.h>

void main()
{
    int q, qAcert;
    printf("Insira a quantidade de questoes da prova: ");
    scanf("%d", &q);
    printf("Insira o numero de questoes que o candidato acertou: ");
    scanf("%d", &qAcert);

    int pAcert = (qAcert * 100) / q;
    int pErro = q - pAcert;

    printf("\nO percentual de acertos sera de %d porcento.", pAcert);
    printf("\nO percentual de erros sera de %d porcento.", pErro);
}