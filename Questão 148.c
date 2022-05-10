/* 148.	Escreva um programa que permita que o usuário jogue o jogo do “arrochado”. Neste jogo, o programa gera um número
aleatório entre 1 e 100 e o usuário deve “arrochar” o número gerado pelo computador. A cada jogada, os limites do jogo
vão se estreitando de acordo com os valores digitados pelo usuário. O jogo acaba quando o usuário consegue imprensar o
número gerado pelo computador (neste caso ele ganha) ou quando o usuário entra com o número gerado pelo computador
(neste caso ele perde). Em pascal, use a função random ou randomize para a geração de números aleatórios.  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int rand_max = 101;

void main()
{
    int x, m;
    srand(time(NULL));

    while (x != m)
    {
        printf("\nInsira um numero: ");
        scanf("%d", &m);

        if (m >= 1 && m <= rand_max - 1)
        {
            x = rand() % rand_max;
            printf("Numero gerado pela maquina: %d\n", x);
            if (m == x + 1 || m == x - 1)
            {
                printf("\nVoce ganhou!");
                break;
            }
            else if (m == x)
            {
                printf("\nVoce Perdeu!");
            }
        }
        else
        {
            printf("\nO valor minimo e maximo esta entre 1 e 100.");
            printf("\nTente novamente!");
            break;
        }
    }
}
