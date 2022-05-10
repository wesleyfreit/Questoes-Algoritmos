/* 128.	Escreva um programa que leia o nome e o peso de 20 bois que participam de uma exposição e imprima o nome do 
boi mais leve e o nome do boi mais pesado. Para isso, suponha que todos os bois têm pesos distintos.    */

#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[20], palavra1[20], palavraA[20], palavraB[20], palavra2[20];

    float peso;
    float pesomax = 0;
    float peso1 = 0;
    float pesomin = 0;

    int cont = 0;

    float x = 0;

    while (cont < 4)
    {
        system("cls");
        fflush(stdin);

        printf("\nInsira o nome do boi: ");
        gets(palavra);

        fflush(stdin);

        printf("Insira o peso do boi: ");
        scanf("%f", &peso);
        
        fflush(stdin);

        if (peso > pesomax)
        {
            pesomax = peso;
            strcpy(palavra1, palavra);
        }
        else if(peso < pesomax){

            peso1 = peso;
            strcpy(palavraA, palavra);
            if(pesomin == 0)
            {
                pesomin = peso; 
                strcpy(palavra2, palavra);
            }

            if(peso1 < pesomin)
            {
                pesomin = peso1;
                strcpy(palavra2, palavraA);
            }
        }
        cont++;
    }
    printf("\nO boi de nome %s tem %.2fkg, ele e o mais pesado.", palavra1, pesomax);
    printf("\n\nO boi de nome %s tem %.2fkg, ele e o mais leve.", palavra2, pesomin);
}