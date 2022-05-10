/* 30.	Escreva um programa que leia os valores das coordenadas X e Y e 
dois pontos P e Q e determine a distância entre estes dois pontos. 
A distância entre dois pontos pode ser determinada através da distância euclidiana.  
distancia = /(x1 − x2)2 +(y1 − y2)2 */

#include <stdio.h>
#include <math.h>

void main()
{
    float x, y, p, q;
    printf("Insira os pontos X e Y: ");
    scanf("%f%f", &x, &y);
    printf("Insira os pontos P e Q: ");
    scanf("%f%f", &p, &q);

    float pQdr1 = pow(x - p, 2);
    float pQdr2 = pow(y - q, 2);
    float raiz = sqrt(pQdr1+pQdr2);

    printf("\nA distancia entre os dois pontos e de: %.2f", raiz);




}
