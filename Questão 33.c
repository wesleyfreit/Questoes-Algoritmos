/* 33.	Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um 
dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos por 
cada candidato. Para resolver este programa, considere que não houve votos brancos e nem nulos.  */

#include <stdio.h>
#include <string.h>

void main()
{
    char cand1[20], cand2[20], cand3[20];
    int qnt1, qnt2, qnt3;
    printf("Insira o nome do primeiro candidato e a quantidade de votos recebidos: ");
    scanf("%s%d", &cand1, &qnt1);
    printf("Insira o nome do segundo candidato e a quantidade de votos recebidos: ");
    scanf("%s%d", &cand2, &qnt2);
    printf("Insira o nome do terceiro candidato e a quantidade de votos recebidos: ");
    scanf("%s%d", &cand3, &qnt3);

    float qntT = qnt1 + qnt2 + qnt3;
    float porct1 = (qnt1 * 100) / qntT;
    float porct2 = (qnt2 * 100) / qntT;
    float porct3 = (qnt3 * 100) / qntT;

    printf("\nO(a) candidato(a) %s recebeu %.2f porcento dos votos.", cand1, porct1);
    printf("\nO(a) candidato(a) %s recebeu %.2f porcento dos votos.", cand2, porct2);
    printf("\nO(a) candidato(a) %s recebeu %.2f porcento dos votos.", cand3, porct3);
}