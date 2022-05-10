/* 2°. Escreva um programa em C que leia um valor do tipo string e dois caracteres c1
e c2. Depois disso, o programa deve modificar a string informada pelo usuário,
substituindo todas as ocorrências do caractere c1 pelo caractere c2. A
modificação da string deve ser feita por meio de um subprograma (devem

ser passados três parâmetros: a string a ser modificada, o caractere que
deve ser substituído e o novo caractere que deve ser usado) e a impressão da
string modificada deve ocorrer FORA do subprograma responsável por
fazer a modificação. O programa deve imprimir o valor da string antes e após a
modificação. */

#include <stdio.h>
#include <string.h>

char modString(char *string, char c1, char c2){
    int leitor = strlen(string);
    int k;
    for (k = leitor; k >= 0; k--){
        if (string[k] == c1)
            string[k] = c2;
    }
    return *string;
}

void main(){
    char string[100];
    char c1, c2;
    printf("\n| MODIFICADOR DE LETRAS DE UMA STRING |\n\n");
    printf("Insira uma palavra ou frase para modificar: ");
    gets(string);

    fflush(stdin);
    printf("\nQual letra deseja alterar? ");
    scanf("%c", &c1);

    fflush(stdin);
    printf("\nPara qual letra quer alterar a letra '%c'? ", c1);
    scanf("%c", &c2);

    printf("\n\n| Antes da Alteracao: %s.", string);

    char modificacao = modString(string, c1, c2);

    printf("\n\n| Depois da Alteracao: %s.\n\n\n", string);

    system("pause");
}
