/* 124.	Escreva um programa que imprima os seis primeiros pares de números primos gêmeos. Dois números são 
chamados de primos gêmeos se eles forem primos e a diferença entre os dois for igual a 2. (Por exemplo, 11 e 
13 são primos gêmeos).  */

#include <stdio.h>

void main()
{
    int valor = 6;
    int contador = 1;
    int cont = 0;
    int divisor = 1;
    int n = 1;
    int gemeo1 = 0;
    int gemeo2 = 0;
    int ordem = 0;

    while (contador <= valor)
    {

        while (divisor <= n)
        {

            if (n % divisor == 0)
            {
                cont++;
            }
            divisor++;
        }
        if (cont == 2)
        {
            gemeo1 = gemeo2;
            gemeo2 = n;
            n++;
            cont = 0;
            divisor = 1;
        }
        else
        {
            n++;
            cont = 0;
            divisor = 1;
        }
        if (gemeo2 > 0 && gemeo1 > 0)
        {
            int sub = gemeo2 - gemeo1;
            if (sub == 2)
            {
                ordem++;
                printf("\n%d.o Par = %d - %d", ordem, gemeo1, gemeo2);
                contador++;
                gemeo2 = 0;
                gemeo1 = 0;
            }
        }
    }
}