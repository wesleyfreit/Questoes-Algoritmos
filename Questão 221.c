/* 221.	Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu reverso. Você deve sempre considerar que o
número lido tem três algarismos. Desta forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de 40
deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve armazenar o valor do reverso em uma variável antes de
exibi-lo para o usuário.  O valor do reverso deve ser calculado através de um subprograma. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int reverso(int n){
    int k, x, z = 0;
    int reverso = 0;
    float v;
    for (k = 2; k >= 0; k--){
        v = pow(10, k);
        x = n / v;
        int a = (float)v;
        n = n % a;
        v = pow(10, z);
        reverso = (x * v) + reverso;
        z++;
    }
    return reverso;
}
void main(){
    int n;
    printf("\nInsira um número entre 0 e 999: ", setlocale(LC_ALL, "Portuguese"));
    scanf("%d", &n);

    printf("\n | O reverso de %d é %d\n\n", n, reverso(n), setlocale(LC_ALL, "Portuguese"));

    system("pause");
}
