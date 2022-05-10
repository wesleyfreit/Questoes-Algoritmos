/* 96.	Escreva um programa que leia cinco números inteiros e determine o segundo maior número digitado pelo usuário e a ordem em que o 
mesmo foi digitado.   */

#include <stdio.h>

void main()
{
    int n1, n2, n3, n4, n5;
    printf("Insira 5 numeros reais: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        if(n2 > n3 && n2 > n4 && n2 > n5){
            printf("\n%d e o segundo maior numero, ele foi o segundo numero digitado.", n2);
        }
        else if(n3 > n2 && n3 > n4 && n3 > n5){
            printf("\n%d e o segundo maior numero, ele foi o terceiro numero digitado.", n3);
        }
        else if(n4 > n2 && n4 > n3 && n4 > n5){
            printf("\n%d e o segundo maior numero, ele foi o quarto numero digitado.", n4);
        }
        else if(n5 > n2 && n5 > n3 && n5 > n4){
            printf("\n%d e o segundo maior numero, ele foi o quinto numero digitado.", n5);
        }
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        if(n1 > n3 && n1 > n4 && n1 > n5){
            printf("\n%d e o segundo maior numero, ele foi o primeiro numero digitado.", n1);
        }
        else if(n3 > n1 && n3 > n4 && n3 > n5){
            printf("\n%d e o segundo maior numero, ele foi o terceiro numero digitado.", n3);
        }
        else if(n4 > n1 && n4 > n3 && n4 > n5){
            printf("\n%d e o segundo maior numero, ele foi o quarto numero digitado.", n4);
        }
        else if(n5 > n1 && n5 > n3 && n5 > n4){
            printf("\n%d e o segundo maior numero, ele foi o quinto numero digitado.", n5);
        }        
    }
    else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        if(n1 > n2 && n1 > n4 && n1 > n5){
            printf("\n%d e o segundo maior numero, ele foi o primeiro numero digitado.", n1);
        }
        else if(n2 > n1 && n2 > n4 && n2 > n5){
            printf("\n%d e o segundo maior numero, ele foi o segundo numero digitado.", n2);
        }
        else if(n4 > n1 && n4 > n2 && n4 > n5){
            printf("\n%d e o segundo maior numero, ele foi o quarto numero digitado.", n4);
        }
        else if(n5 > n1 && n5 > n2 && n5 > n4){
            printf("\n%d e o segundo maior numero, ele foi o quinto numero digitado.", n5);
        }        
    }
    else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        if(n1 > n2 && n1 > n3 && n1 > n5){
            printf("\n%d e o segundo maior numero, ele foi o primeiro numero digitado.", n1);
        }
        else if(n2 > n1 && n2 > n3 && n2 > n5){
            printf("\n%d e o segundo maior numero, ele foi o segundo numero digitado.", n2);
        }
        else if(n3 > n1 && n3 > n2 && n3 > n5){
            printf("\n%d e o segundo maior numero, ele foi o terceiro numero digitado.", n3);
        }
        else if(n5 > n1 && n5 > n2 && n5 > n3){
            printf("\n%d e o segundo maior numero, ele foi o quinto numero digitado.", n5);
        }
    }
    else if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
        if(n1 > n2 && n1 > n3 && n1 > n4){
            printf("\n%d e o segundo maior numero, ele foi o primeiro numero digitado.", n1);
        }
        else if(n2 > n1 && n2 > n3 && n2 > n4){
            printf("\n%d e o segundo maior numero, ele foi o segundo numero digitado.", n2);
        }
        else if(n3 > n1 && n3 > n2 && n3 > n4){
            printf("\n%d e o segundo maior numero, ele foi o terceiro numero digitado.", n3);
        }
        else if(n4 > n1 && n4 > n2 && n4 > n3){
            printf("\n%d e o segundo maior numero, ele foi o quarto numero digitado.", n4);
        }
    }    
}