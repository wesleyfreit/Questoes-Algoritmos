/* 31.	Em um determinado concurso público, para cada questão que um candidato acerta ele 
ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada questão que 
ele deixa em branco ele não ganha e nem perde pontos. Escreva um programa que leia o número 
de questões que um candidato acertou, o número de questões que ele errou e o número de 
questões que ele deixou em branco e determine a sua pontuação final. */

#include <stdio.h>

const int acert = 5;
const int error = 3;

void main()
{
    int qAcert, qErro, qBranco;
    printf("Insira a quantidade de Acertos, Erros e em Branco: ");
    scanf("%d%d%d", &qAcert, &qErro, &qBranco);

    int vT = qAcert + qErro;
    int pA = acert * vT;
    int pE = error * qErro;
    int pF = pA - pE;
    int tQ = qAcert + qErro + qBranco;

    printf("\nNum total de %d questoes, a pontuacao final sera de %d pontos", tQ, pF);

    return 0;
}
