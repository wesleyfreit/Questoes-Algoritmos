/* 149.	Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para cada item, o usuário deve informar
o seu nome, o seu preço unitário e a quantidade comprada. Após cada leitura, o programa deve perguntar ao usuário se ele
deseja adicionar um novo item ou fechar a conta. O programa deve considerar que o usuário irá digitar pelo menos um item.
Após terminar a leitura, o programa deve mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a
prazo corresponde à soma do valor total de cada item digitado pelo usuário. O valor da conta à vista corresponde ao valor
da conta a prazo com um desconto de 15%.  */

#include <stdio.h>
#include <string.h>

void main()
{
    char vetnome[20];
    float preco;
    int und;
    int cont = 0;
    int fecha;
    float soma;
    do
    {
        cont++;
        fflush(stdin);
        printf("\nInsira o nome do produto %d: ", cont);
        scanf("%s", &vetnome);
        printf("Insira o valor unitario do produto %d: ", cont);
        scanf("%f", &preco);
        printf("Insira a quantidade comprada: ");
        scanf("%d", &und);

        soma = soma + (preco * und);

        printf("\nDeseja adicionar um novo item ou fechar o caixa?");
        printf("\nInsira 1 para fechar ou 0 para adicionar: ");
        scanf("%d", &fecha);
        if (fecha == 1)
        {
            printf("\n!CAIXA ENCERRADO!\n");
            break;
        }
    } while (fecha != 1);

    printf("\nTotal a prazo = R$%.2f", soma);
    float avista = soma - (soma * 0.15);
    printf("\nTotal a vista = R$%.2f", avista);


}
