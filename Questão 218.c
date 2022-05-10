/* 218.	Escreva um programa que leia um valor em segundos e converta para a forma X horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale
a 1 hora 1 minutos e 10 segundos. O programa deve ter: um subprograma para calcular o valor das horas, um subprograma para calcular o valor dos , um
subprograma para calcular o valor dos segundos e um subprograma para imprimir o resultado final. */

#include <stdio.h>
#include <locale.h>

int h(int n){
    return n / 3600;
}
int m(int n){
    n = n % 3600;
    return n / 60;
}
int s(int n){
    n = n % 3600;
    return n % 60;
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("\nInsira o valor em segundos: ");
    scanf("%d", &n);

    printf("\nA conversão de %ds é:\n", n);
    printf("\n | %d horas, %d minutos e %d segundos.\n\n", h(n), m(n), s(n));

    system("pause");
}
