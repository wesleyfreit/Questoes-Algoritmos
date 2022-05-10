/* 152.	A matemática prova que números inteiros podem ser representados de maneira única como um produto
 de potências de números primos distintos. Este produto é chamado de decomposição em fatores primos do número
  e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23x32x5 e 21 = 3X7. 
  Com base nessas informações, escreva um programa em pascal que obtenha a decomposição em fatores primos de 
  um número inteiro positivo informado pelo usuário.   */

#include <stdio.h>

void main()
{
    int n;
    printf("Informe um nomero para decompor: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Informe um valor valido");
    }
    else
    {
        int resto;

        int fator = 2;
        int mmc = 1;

        do
        {
            resto = n % fator;

            if (resto == 0)
            {
                n = n / fator;
                printf("%d", fator);
                if (n > 1){
                    printf(" x ");
                }
            }

            if(resto > 0 )
            {
                fator++;
            }
            else
            {
                mmc = fator * mmc;
            }
        } while (n > 1);

        printf(" = %d", mmc);
    } // não importa o valor de n, o comando tem que fazer pelo menos uma divisão pra qualquer número.
}

/* estrutura: 
            while(){} Primeiro testa a condição pra se for verdadeira executa os comandos internos;
                os comandos internos são executados 0 o umais vezes.

            do{} while() Executa os comandos pelo menos uma vez sem testar a condição;
                os comandos internos vão ser executados pelo menos uma vez.
*/