/* 221.	Escreva um programa que leia um n�mero inteiro entre 0 e 999 e calcule o seu reverso. Voc� deve sempre considerar que o
n�mero lido tem tr�s algarismos. Desta forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de 40
deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve armazenar o valor do reverso em uma vari�vel antes de
exibi-lo para o usu�rio.  O valor do reverso deve ser calculado atrav�s de um subprograma. */

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
    printf("\nInsira um n�mero entre 0 e 999: ", setlocale(LC_ALL, "Portuguese"));
    scanf("%d", &n);

    printf("\n | O reverso de %d � %d\n\n", n, reverso(n), setlocale(LC_ALL, "Portuguese"));

    system("pause");
}
