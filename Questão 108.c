/* 108.	Escreva um programa que leia 20 números entre 10000 e 99999 referente aos números dos deputados estaduais eleitos e 
identifique a quantidade de candidatos que cada partido elegeu. O número do partido do deputado pode ser identificado pelos 
dois primeiros algarismos do número do candidato. Por exemplo, um candidato com número 13457 concorre pelo PT, que é o partido 
de número 13, enquanto que um candidato com número 45879 concorre pelo PSDB, que é o partido de número 45.  
Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB). 
*/

#include <stdio.h>

void main()
{
    printf("Considere utilizar os seguintes numeros de partidos neste programa:\n");
    printf("13 (PT)   14 (PTB)   15 (PMDB)\n25 (DEM)  45 (PSDB)  65 (PCdoB)\n");
    printf("\nInsira 20 numeros de deputados entre 10000 e 99999.");
    printf("\nObs: Caso insira numeros errados, a contagem ficara errada.\n\n");

    int k, n;
    int pt = 0;
    int ptb = 0;
    int pmdb = 0;
    int dem = 0;
    int psdb = 0;
    int pcdob = 0;
    for (k = 1; k <= 20; k++)
    {
        printf("Insira o numero do deputado %d: ", k);
        scanf("%d", &n);

        if (n < 10000 || n > 99999)
        {
            printf("\nVoce inseriu um numero diferente do pedido, a contagem ficara incorreta.\n\n");
        }
        else if (n / 1000 != 13 && n / 1000 != 14 && n / 1000 != 15 && n / 1000 != 25 && n / 1000 != 45 && n / 1000 != 65)
        {
            printf("\nO numero inserido nao pertence a nenhum partido, a contagem ficara incorreta.\n\n");
        }

        if (n / 1000 == 13)
        {
            pt = 1 + pt;
        }
        if (n / 1000 == 14)
        {
            ptb = 1 + ptb;
        }
        if (n / 1000 == 15)
        {
            pmdb = 1 + pmdb;
        }
        if (n / 1000 == 25)
        {
            dem = 1 + dem;
        }
        if (n / 1000 == 45)
        {
            psdb = 1 + psdb;
        }
        if (n / 1000 == 65)
        {
            pcdob = 1 + pcdob;
        }
    }
    printf("\nOs candidatos de cada partido ficarao assim: ");
    printf("\nPT = %d candidatos\nPTB = %d candidatos\nPMDB = %d candidatos\nDEM = %d candidatos\nPSDB = %d candidatos\nPCdoB = %d candidatos", pt, ptb, pmdb, dem, psdb, pcdob);
}
