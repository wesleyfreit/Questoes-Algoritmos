/* 1°. O IFPB precisa de um programa para fazer a correção automática do seu teste de
seleção. A prova é composta por dez questões objetivas, cuja resposta é uma
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o
programa deve ler o cartão de respostas de três candidatos e verificar quantas
questões cada um deles acertou. O programa deve ter pelo menos três
subprogramas: um para ler um vetor de caracteres (deve ser passado como
parâmetro o vetor que deve ser preenchido), um subprograma para
imprimir um vetor de caracteres (deve ser passado como parâmetro o vetor
que deve ser preenchido) e outro para comparar o cartão de respostas com
o gabarito para calcular o número de acertos de um candidato (devem ser
passados como parâmetros dois vetores: o gabarito e o cartão de respostas).
O programa deve imprimir o gabartito, o cartão de respostas e o número de
acertos de cada candidato. */

#include <stdio.h>

const int tamanho = 10;
const int qntGab = 3;

char vetP(char vet[tamanho]){
    int k;
    for (k = 0; k < tamanho; k++){
        fflush(stdin);

        printf("Insira a resposta da questao %d: ", k + 1);
        scanf("%c", &vet[k]);
    }
}

char imprP(char impr[tamanho]){
    int k;
    printf("\n");
    for (k = 0; k < tamanho; k++)
        printf("\\| Questao %d: %c \n", k + 1, impr[k]);
}

int compP(char gab[tamanho], char resp[tamanho]){
    int acert = 0;
    int k;
    for (k = 0; k < tamanho; k++){
        if (gab[k] == resp[k])
            acert++;
    }
    return acert;
}

void main(){
    int x, k;
    char gab[tamanho];
    char resp[tamanho];

    printf("\n| GABARITO |\n\n");

    vetP(gab);
    printf("\n\n| GABARITO RESPOSTA |\n");
    imprP(gab);

    for (x = 1; x <= qntGab; x++){
        printf("\n\n| PROVA ALUNO %d |\n\n", x);

        vetP(resp);

        printf("\n\n| CARTAO RESPOSTA %d |\n", x);
        imprP(resp);

        int comparacao = compP(gab, resp);

        printf("\n\n| INFO |\n");
        printf("\nO candidato %d acertou %d questoes.\n", x, comparacao);
    }
    printf("\n\n| FIM DA CORRECAO |\n\n");
    system("pause");
}