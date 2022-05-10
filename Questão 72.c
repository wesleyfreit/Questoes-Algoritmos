/* 72.	João resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo mês irá poupar 25% do seu salário, até conseguir juntar um bom valor para ser dado como entrada. 
Com base nestas informações, escreva um programa que receba como entrada o valor do salário atual de João e o valor que ele deseja juntar como entrada e calcule quanto tempo ele terá que trabalhar 
para conseguir juntar o valor desejado. A resposta deve ser dada na forma x anos e y meses.   */

#include <stdio.h>

void main()
{
    float salario, vCar;
    printf("Insira o valor do salario: ");
    scanf("%f", &salario);
    printf("Insira quanto Joao deseja juntar: ");
    scanf("%f", &vCar);

    float vGuard = salario * 0.25;
    float guard = vGuard;
    int contador = 1;

    while(vGuard < vCar){
        vGuard = vGuard+guard;
        contador = contador + 1;
    }
    int vAn = contador / 12;
    int vMe = contador % 12;

    printf("\nJoao tera que trabalhar %d anos e %d meses ate conseguir juntar o dinheiro.", vAn, vMe);


}
