/* 212.	Escreva um programa que leia o número total de questões existentes em uma prova e o número de questões que um
candidato acertou e determine o seu percentual de acertos e o seu percentual de erros. O cálculo deve ser realizado
através de um subprograma. */

#include <stdio.h>

float acerto(int nG, int nC)
{
    return (float)(nC * 100) / nG;
}
float erro(int nG, int nC)
{
    return (float)((nG - nC) * 100) / nG;
}
void main()
{
    int nG, nC;
    printf("Insira o numero total de questoes existentes na prova: ");
    scanf("%d", &nG);
    printf("Insira o numero de questoes que o candidato acertou: ");
    scanf("%d", &nC);

    printf("\nO percentual de acertos eh de %.2f porcento, o de erros eh de %.2f porcento.\n\n", acerto(nG, nC), erro(nG, nC));

    system("pause");
}
