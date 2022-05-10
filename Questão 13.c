/* 13.	Escreva um programa que leia um valor em KB e calcule o seu 
valor correspondente em bits, bytes, MB e GB. */

#include <stdio.h>

void main()
{
    float kb;
    printf("Insira o valor Kb para converter: ");
    scanf("%f", &kb);

    float byte = kb * 1024;
    float bit = byte * 8;
    float mb = kb / 1024;
    float gb = mb / 1024;

    printf("\nConversao: %.1fkB \n\n%.2f Bits\n%.2f B\n%.2f Mb\n%.2f Gb", kb, bit, byte, mb, gb);

    return 0;
}