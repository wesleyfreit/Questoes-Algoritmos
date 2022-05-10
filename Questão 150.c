/* 150.	Escreva um programa que leia dois números inteiros positivos N e M e use o método das aproximações sucessivas
de Newton para determinar a raiz enésima de M. De acordo com o método de Newton, são calculados diversos elementos xk,
de acordo com as equações abaixo. Inicialmente, deve ser calculado o valor de x1. Se for necessário, devem ser calculados
os valores de x2, x3 e assim sucessivamente. O cálculo dos números deve ser encerrado quando for gerado um valor xk de
forma que o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a precisão desejada.
Quando isso acontece, o último xk gerado corresponde ao valor da raiz. Para calcular a raiz, considere x0 = 1 e a
precisão de 0,0001.

x1 = x0 −	f (x0)	,	   x2 = x1 − f (x1) ,  x3 = x2 − f (x2) ,...,   xk = xk−1 −  f (xk−1)
            f´(x0)		             f´(x1)		         f´(x2)			             f´(xk−1)


De forma que: f (x)= xN − M e f '(x) = NxN−1

*/

#include <stdio.h>
#include <math.h>

const float precisao = 0.0001;

void main()
{
    int m, n;
    printf("Insira um numero que quer calcular a raiz: ");
    scanf("%d", &m);
    printf("Insira a raiz que quer calcular: ");
    scanf("%d", &n);

    float xant = 1;

    float xprox, diferenca;

    do
    {

        float fx = pow(xant, n) - m;
        float fx1 = n * pow(xant, n - 1);

        xprox = xant - (fx / fx1);

        diferenca = (xprox - xant);

        if (diferenca < 0)
        {
            diferenca = diferenca * (-1);
        }
        xant = xprox;
    } while (diferenca >= precisao);

    printf("\nA raiz %d� de %d eh %.2f", n, m, xprox);
}