/* 214.	Em um determinado concurso público, para cada questão que um candidato acerta ele ganha 5 pontos, para cada questão
que ele erra ele perde 3 pontos e para cada questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de questões que ele errou e o número de questões
que ele deixou em branco e determine a sua pontuação final. A pontuação deve ser calculada através de um subprograma, que
deve receber como entrada o número de questões certas, o número de questões erradas e o número de questões em branco.  */
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
    printf("Insira quantas questões o candidato acertou > ");
    scanf("%d", &acert);
    printf("Insira quantas questões o candidato errou > ");
    scanf("%d", &erro);
    printf("Insira quantas questões o candidato deixou em branco > ");
    scanf("%d", &branco);

    printf("\nA pontuação final é %d pontos\n\n", pFinal(acert, erro, branco));

    system("pause");
}
