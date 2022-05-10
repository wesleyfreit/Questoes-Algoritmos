/* 88.	Escreva um programa que leia um único número entre 10000 e 99999 referente ao número de um deputado estadual e identifique o partido 
pelo qual ele está concorrendo. O número do partido pode ser identificado pelos dois primeiros algarismos do número do candidato. Por exemplo, 
um candidato com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um candidato com número 45879 concorre pelo PSDB, que 
é o partido de número 45.  Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).  */

#include <stdio.h>

void main()
{
    int n;
    printf("Os partidos permitidos sao PT(13), PTB(14), PMDB(15), DEM(25), PSDB(45), PCdoB(65)");
    printf("\nInsira um numero entre 10000 e 99999 referente ao numero de um deputado estadual: ");
    scanf("%d", &n);

    if(n >=10000 && n <= 99999){
        if (n / 1000 == 13){
            printf("\nEsta concorrendo no partido PT.");
        }
        else if(n / 1000 == 14){
            printf("\nEsta concorrendo no partido PTB.");
        }
        else if(n / 1000 == 15){
            printf("\nEsta concorrendo no partido PMDB.");
        }
        else if(n / 1000 == 25){
            printf("\nEsta concorrendo no partido DEM.");
        }
        else if(n / 1000 == 45){
            printf("\nEsta concorrendo no partido PSDB.");
        }
        else if(n / 1000 == 65){
            printf("\nEsta concorrendo no partido PCdoB.");
        }
        else{
            printf("O numero inserido nao pertence a nenhum partido.");
        }
    }
    else{
        printf("\nInsira um numero correto.");
    }
}