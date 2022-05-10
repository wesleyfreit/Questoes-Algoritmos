/* 26.	Escreva um programa que leia o peso e a altura dos atletas das quatro
duplas que vão participar de um torneio de vôlei de praia e calcule o peso e 
a altura média de cada dupla e o peso e a altura média de todos os jogadores do torneio.  */

#include <stdio.h>

void main()
{
    int k;
    float contador1 = 0;
    float contador2 = 0;

    for (k = 1; k <= 4; k++)
    {
        float altura1, peso1;
        printf("\nInsira o peso e altura do primeiro atleta da dupla %d: ", k);
        scanf("%f%f", &peso1, &altura1);

        float altura2, peso2;
        printf("Insira o peso e altura do segundo atleta da dupla %d: ", k);
        scanf("%f%f", &peso2, &altura2);

        float mPeso = (peso1 + peso2) / 2;
        float mAlt = (altura1 + altura2) / 2;

        printf("\nA media de peso da dupla sera %.2f kg", mPeso);
        printf("\nA media de altura da dupla sera %.2f m\n", mAlt);

        contador1 = peso1 + peso2 + contador1;
        contador2 = altura1 + altura2 + contador2;
    }
    contador1 = contador1 / 8;
    contador2 = contador2 / 8;

    printf("\n\nA media de peso total das 4 duplas sera %.2f kg", contador1);
    printf("\nA media de altura total das 4 duplas sera %.2f m", contador2);

    return 0;
}