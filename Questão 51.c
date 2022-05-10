/* 51.	Carlos chegou ao aeroporto para fazer o check-in do seu vôo. Ao entrar na fila de passageiros, ele percebeu que a empresa aérea 
tinha 5 guichês para fazer o check-in dos passageiros, e que estes guichês eram numerados de 1 a 5. Considerando que os guichês iam começar 
a realização dos check-ins no exato momento em que Carlos entrou na fila, e que cada check-in é realizado em exatamente 15 minutos, escreva 
um programa que leia um número inteiro positivo que corresponde à posição de Carlos na fila e determine o número do guichê no qual ele será 
atendido e o tempo que ele vai ter que esperar para ser atendido.  */

#include <stdio.h>

int nGuiche = 5;
int espera = 15;

void main() 
{
    int posicao;
    printf("Insira a posicao de Carlos na fila: ");
    scanf("%d", &posicao);

    int rest = (posicao -1) % nGuiche;
    int guiche = rest + 1;

    int cont = (posicao - 1) / nGuiche;
    int tMin = cont * espera;
    int convHor = tMin / 60;
    int convMin = tMin % 60;

    printf("\nCarlos sera atendido no giche %d e vai aguardar %dh:%dm para ser atendido", guiche,convHor,convMin);


}
