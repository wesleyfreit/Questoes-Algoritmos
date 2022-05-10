/* 74.	Escreva um programa que leia três números distintos e identifique o número que não é nem o menor e nem o maior número. */

#include <stdio.h>

void main()
{
     int n1, n2, n3;
     printf("Insira tres numeros inteiros: ");
     scanf("%d%d%d", &n1, &n2, &n3);

     if (n1 > n2 && n1 < n3 || n1 > n3 && n1 < n2)
     {
          printf("\n%d e o numero do meio.", n1);
     }
     else if (n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3)
     {
          printf("\n%d e o numero do meio.", n2);
     }
     else if (n3 > n1 && n3 < n2 || n3 < n1 && n3 > n2)
     {
          printf("\n%d e o numero do meio.", n3);
     }
     else
     {
          printf("\nNao ha numero do meio.");
     }
}
