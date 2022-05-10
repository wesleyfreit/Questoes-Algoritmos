/* 213.	Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e determine a distância entre
estes dois pontos. A distância entre dois pontos pode ser determinada através da distância euclidiana. O cálculo da
distância deve ser realizado através de um subprograma, que deve receber como entrada os valores das coordenadas
x e y dos dois pontos.
distancia = (x1 − x2)2 +(y1 − y2)2
 */

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
