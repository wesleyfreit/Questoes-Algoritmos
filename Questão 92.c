/* 92.	Escreva um programa que leia um verbo regular no infinitivo (da 1ª, 2ª ou 3ª conjugação) e imprima a sua conjugação no presente, 
pretérito perfeito e futuro do presente do modo indicativo. */

#include <stdio.h>
#include <string.h>

void main()
{
    char verbo[20], radical[18];
    printf("Insira o verbo no infinitivo: ");
    gets(verbo);

    int numLetras = strlen(verbo);
    char vogal = verbo[numLetras - 2];

    strncpy(radical, verbo, numLetras - 2);
    radical[numLetras - 2] = '\0';

    printf("\nA conjugacao no presente ficara assim:\n");

    switch (vogal)
    {
    case 'a':
        printf("\neu %so\n", radical);
        printf("tu %sas\n", radical);
        printf("ele %sa\n", radical);
        printf("nos %samos\n", radical);
        printf("vos %sais\n", radical);
        printf("eles %sam\n", radical);
        break;
    case 'e':
        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele %se\n", radical);
        printf("nos %semos\n", radical);
        printf("vos %seis\n", radical);
        printf("eles %sem\n", radical);
        break;
    case 'i':
        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele %se\n", radical);
        printf("nos %simos\n", radical);
        printf("vos %sis\n", radical);
        printf("eles %sem\n", radical);
        break;
    }
    printf("\nA conjugacao no preterito ficara assim:\n");

    switch (vogal)
    {
    case 'a':
        printf("\neu %sei\n", radical);
        printf("tu %saste\n", radical);
        printf("ele %sou\n", radical);
        printf("nos %samos\n", radical);
        printf("vos %sastes\n", radical);
        printf("eles %saram\n", radical);
        break;
    case 'e':
        printf("eu %si\n", radical);
        printf("tu %seste\n", radical);
        printf("ele %seu\n", radical);
        printf("nos %semos\n", radical);
        printf("vos %sestes\n", radical);
        printf("eles %seram\n", radical);
        break;
    case 'i':
        printf("eu %si\n", radical);
        printf("tu %siste\n", radical);
        printf("ele %siu\n", radical);
        printf("nos %simos\n", radical);
        printf("vos %sistes\n", radical);
        printf("eles %siram\n", radical);
        break;
    }
    printf("\nA conjugacao no futuro do presente do modo indicativo ficara assim:\n");

    switch (vogal)
    {
    case 'a':
        printf("\neu %sarei\n", radical);
        printf("tu %saras\n", radical);
        printf("ele %sara\n", radical);
        printf("nos %saremos\n", radical);
        printf("vos %sareis\n", radical);
        printf("eles %sarao\n", radical);
        break;
    case 'e':
        printf("eu %serei\n", radical);
        printf("tu %seras\n", radical);
        printf("ele %sera\n", radical);
        printf("nos %seremos\n", radical);
        printf("vos %sereis\n", radical);
        printf("eles %serao\n", radical);
        break;
    case 'i':
        printf("eu %sirei\n", radical);
        printf("tu %siras\n", radical);
        printf("ele %sira\n", radical);
        printf("nos %siremos\n", radical);
        printf("vos %sireis\n", radical);
        printf("eles %sirao\n", radical);
        break;
    }
}