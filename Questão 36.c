/* 36.	Escreva um programa que leia dois números inteiros e os armazene em duas variáveis a e b. 
Após a leitura, o programa deve permutar os valores armazenados nas duas variáveis. O programa deve 
imprimir os valores das duas variáveis antes e após a permutação.   */

#include <stdio.h>

void main()
{
    int a, b;
    printf("Insira dois numeros inteiros: ");
    scanf("%d%d", &a,&b);

    int c = a;
        a = b;
        b = c;
    
    printf("A permutacao de (%d, %d) ficara da seguinte forma (%d, %d)", c, a, a, b);
}