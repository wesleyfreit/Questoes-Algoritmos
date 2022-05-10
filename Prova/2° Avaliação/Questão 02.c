/* 2°. O IFPB precisa de um programa que faça a correção automática das provas do seu teste de seleção. A prova, que é 
a mesma para todos os alunos, consiste de dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, 
que deve ser escrito na linguagem C, deve ler o gabarito da prova e, a seguir, as opções que aparecem no cartão de respostas 
de um candidato. Depois disso, o programa deve imprimir o número de questões que o candidato acertou. */

#include <stdio.h>
#include <string.h>

const int tam = 10;

void main()
{
    char gab[tam];
    char resp[tam];
    char cand[20];
    int k, perctA;
    int x = 0;
    int acert = 0;
    int cont = 0;

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
        printf("\n| CASO QUEIRA FINALIZAR A CORRECAO ESCREVA: 'fim'|\n");
        printf("\nInsira o nome de um participante: ");
        gets(cand);
        printf("\n");

        char f = cand[1-1];
        char i = cand[2-1];
        char m = cand[3-1];

        if (f == 'f' && i == 'i' && m == 'm' || f == 'F' && i == 'I' && m == 'M')
        {
            printf("| CORRECAO FINALIZADA! |\n");
            break;
        }

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
                printf("\n%s acertou %d quest", cand, acert);
                if(acert > 1){
                    printf("oes.\n");
                }
                else{
                    printf("ao.\n");
                }
                acert = 0;
                cont = 0;
            }
        }
    }
}
