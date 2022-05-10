/* 127.	Escreva um programa que leia várias palavras e, para cada palavra lida, determine o seu número de letras. 
O processamento deverá ser encerrado quando forem lidas duas palavras de cinco letras.   */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char palavra[20];
    int cont = 0;

    while (cont < 2)
    {
        system("cls");
        printf("\nInsira uma palavra: ");
        gets(palavra);

        int nLetras = strlen(palavra);
        printf("  A palavra tem %d letras.", nLetras);
        getch();

        if (nLetras >= 5)
        {
            cont++;
            printf("\n\nPalavras com 5 ou mais letras ( %d/2 );", cont);
            if (cont == 2)
            {
                printf("\n\n **** Fim do Programa ****");
            }
            getch();
        }
    }
}