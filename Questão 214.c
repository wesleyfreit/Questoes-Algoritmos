/* 214.	Em um determinado concurso p�blico, para cada quest�o que um candidato acerta ele ganha 5 pontos, para cada quest�o
que ele erra ele perde 3 pontos e para cada quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de quest�es que ele errou e o n�mero de quest�es
que ele deixou em branco e determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um subprograma, que
deve receber como entrada o n�mero de quest�es certas, o n�mero de quest�es erradas e o n�mero de quest�es em branco.  */
#include <stdio.h>
#include <math.h>
#include <locale.h>

const int vacert = 5;
const int verro = 3;

int pFinal(int acert, int erro, int branco)
{
    return (acert * vacert) - (erro * verro);
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int acert, erro, branco;
    printf("Insira quantas quest�es o candidato acertou > ");
    scanf("%d", &acert);
    printf("Insira quantas quest�es o candidato errou > ");
    scanf("%d", &erro);
    printf("Insira quantas quest�es o candidato deixou em branco > ");
    scanf("%d", &branco);

    printf("\nA pontua��o final � %d pontos\n\n", pFinal(acert, erro, branco));

    system("pause");
}
