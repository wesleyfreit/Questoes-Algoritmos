/* 163.	O IFPB precisa de um programa que faça a correção automática das provas do seu teste de seleção. A prova,
que é a mesma para todos os alunos, consiste de dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e).
O programa deve ler o gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no seu cartão
de respostas. Para cada candidato, o programa deve imprimir o seu percentual de acertos. O processamento deve ser
encerrado quando for encontrado um candidato com o nome ´fim’, que não deve ser processado. O programa deve imprimir
também a pontuação média dos candidatos. */

#include <stdio.h>
#include <string.h>

const int tam = 10;

void main()
{
    char gab[tam];
    char resp[tam];
    char cand[20];
    int k, perctA, x;
    int acert = 0;
    int cont = 0;
    int qntCand = 0;
    int pontM = 0;

    printf("\n| GABARITO |\n\n");

    for (k = 0; k < tam; k++)
    {
        fflush(stdin);
        printf("Resposta correta da questao %d: ", k + 1);
        scanf("%c", &gab[k]);

        if (gab[k] != 'a' && gab[k] != 'b' && gab[k] != 'c' && gab[k] != 'd' && gab[k] != 'e')
        {
            printf("\nValor incorreto, as letras corretas sao (a, b, c, d ou e).");
            printf("\n\n|TENTE NOVAMENTE!|\n");
            x = 1;
            break;
        }
    }

    if(x != 1){
        printf("\n| TESTE DOS CANDIDATOS |\n");
    }
    while (cand != 'fim')
    {
        if (x == 1)
        {
            break;
        }

        fflush(stdin);
        printf("\nInsira o nome de um participante: ");
        gets(cand);

        char f = cand[1-1];
        char i = cand[2-1];
        char m = cand[3-1];

        if (f == 'f' && i == 'i' && m == 'm')
        {
            printf("\n| CORRECAO FINALIZADA! |\n");
            break;
        }

        qntCand++;

        for (k = 0; k < tam; k++)
        {
            fflush(stdin);
            printf("Resposta da questao %d: ", k + 1);
            scanf("%c", &resp[k]);

            cont++;

            if (resp[k] != 'a' && resp[k] != 'b' && resp[k] != 'c' && resp[k] != 'd' && resp[k] != 'e')
            {
                printf("\nValor incorreto, as letras corretas sao (a, b, c, d ou e).");
                printf("\n\n| TENTE NOVAMENTE! |\n");
                x = 1;
                break;
            }

            if (resp[k] == gab[k])
            {
                acert++;
            }

            if (cont == 10)
            {
                perctA = (acert * 100) / 10;
                printf("\n%s teve percetual de acertos de %d porcento.\n", cand, perctA);
                acert = 0;
                cont = 0;
                pontM = perctA + pontM;
            }
        }
    }

    if(x != 1){

        float pMedia = pontM / qntCand;
        printf("\nA pontuacao media de todos os participantes e de %.2f porcento.", pMedia);
    }
}
