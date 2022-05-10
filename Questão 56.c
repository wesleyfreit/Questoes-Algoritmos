/* 56.	A Cifra de César é um método de criptografia em que cada letra da mensagem original é substituída por outra e a distância entre 
cada letra original e a sua substituta na mensagem enviada é sempre a mesma. Por exemplo, se a letra a da mensagem é substituída pela letra 
f na mensagem enviada, então a letra b será substituída pelo g, o c pelo h, o d pelo i e assim sucessivamente, até que a letra y será substituída 
pelo d e o z pela letra e. Com base nestas informações, escreva um programa que leia um caractere representando uma das letras da mensagem 
original, outro caractere representando a letra que vai substituí-lo na nova mensagem, e um terceiro caractere representando outra letra da 
mensagem original e determine a letra que vai substituíla na nova mensagem.        */

#include <stdio.h>
#include <string.h>

void main()
{
    char l1, l2, l3;
    printf("OBS: INSIRA LETRAS MINUSCULA!");
    printf("\n\nInsira uma letra da mensagem original: ");
    scanf("%c", &l1);

    fflush(stdin);
    printf("Insira a letra para qual voce quer converter: ");
    scanf("%c", &l2);

    fflush(stdin);
    printf("Insira outra letra da mensagem original: ");
    scanf("%c", &l3);

    int conv1 = (int)l1;
    int conv2 = (int)l2;
    int conv3 = (int)l3;

    int resto = 0;

    if (conv1 > conv2)
    {
        resto = conv1 % conv2;
    }
    else if (conv2 > conv1)
    {
        resto = conv2 % conv1;
    }

    conv3 = conv3 + resto;

    if(conv3 > 122)
    {
        conv3 = conv3 - 26;
    }
    if(conv3 < 97)
    {
        conv3 = conv3 + 26;
    }

    char letr = (char)conv3;

    printf("\nA letra substituida sera: %c", letr);
}
