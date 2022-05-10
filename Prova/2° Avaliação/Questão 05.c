/* 5°. Jogos de tabuleiro são atividades comuns de entretenimento na vida cotidiana
das pessoas. Uma de suas características é a necessidade do uso de um tabuleiro
com localizações bem definidas para o posicionamento de peças, podendo
indicar também as fases do jogo. No livro O Homem que Calculava, de Malba
Tahan (São Paulo: Record, 2002, p. 120), há uma história na qual um rei deveria
efetuar o pagamento pelos serviços de um de seus conselheiros, dando-lhe uma
certa quantidade de grãos de trigo a ser calculada da seguinte forma: coloca-se 1
grão de trigo na primeira casa do tabuleiro, 2 na segunda casa, 4 na terceira casa,
8 na quarta casa e assim dobrando-se sucessivamente até a última casa.
Considerando um tabuleiro no qual a posição das casas é definida inicialmente
da esquerda para a direita e depois de cima para baixo, escreva um programa em
C que leia um número inteiro correspondente à quantidade de linhas e colunas
do tabuleiro (considere que a quantidade de linhas é sempre igual à quantidade
de colunas) e gere uma matriz quadrada para representar o tabuleiro. A matriz
gerada deve armazenar, em cada posição, a quantidade de grãos que deve ser
armazenada em cada posição do tabuleiro. Após gerar e preencher a matriz, o
programa deve imprimi-la para o usuário. */

#include <stdio.h>

void main()
{
    int numLC, k, x;
    printf("Insira o numero de linhas e colunas do tabuleiro: ");
    scanf("%d", &numLC);

    int mat[numLC][numLC];

    int num = 1;

    for (k = 0; k < numLC; k++)
    {
        for (x = 0; x < numLC; x++)
        {
            mat[k][x] = num;
            num = num * 2;
        }
    }
    printf("\nO tabuleiro ficara assim: \n\n");
    for (k = 0; k < numLC; k++)
    {
        for (x = 0; x < numLC; x++)
        {
            printf("%8d", mat[k][x]);
        }
        printf("\n\n");
    }
}