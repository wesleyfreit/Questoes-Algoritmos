/* 130.	Escreva um programa que leia o número de pessoas que irão participar de um evento, no qual será sorteado 
um prêmio, e, a seguir, leia o nome e o número do bilhete recebido por cada uma destas pessoas. O programa deve 
informar o nome do ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu bilhete. 
Para isto, você poder supor que: a ordem de chegada de cada pessoa corresponde à ordem de leitura dos seus dados; 
sempre existe uma pessoa cujo número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas uma pessoa.  */

#include <stdio.h>
#include <string.h>

void main()
{
    int nP, k;
    printf("Insira o numero de pessoas que vao participar do evento: ");
    scanf("%d", &nP);

    char nome[20];
    int n;
    char ganhador[20];

    for (k = 1; k <= nP; k++)
    {

        fflush(stdin);

        printf("\nNome do participante %d: ", k);
        gets(nome);

        fflush(stdin);

        printf("\nInsira o numero do bilhete recebido pela pessoa: ");
        scanf("%d", &n);

        fflush(stdin);


        if (k == n)
        {
            strcpy(ganhador, nome);
        }
    }
    printf("\nO(a) ganhador(a) e %s.", ganhador);
}