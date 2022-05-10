/* 135.	Escreva um programa que simule uma votação. O programa deve computar o voto de 20 eleitores e depois 
deve imprimir a quantidade e o percentual de votos recebidos por cada candidato, bem como a quantidade e o 
percentual de votos nulos. As opções de voto são: 
[1] João Borracheiro 
[2] Zé do caminhão 
[3]	Maria da bodega 
[4]	Ana  

*/

#include <stdio.h>

const int qntV = 20;

void main()
{
    int vt, k;
    float c1 = 0;
    float c2 = 0;
    float c3 = 0;
    float c4 = 0;
    float nulo = 0;

    for (k = 1; k <= qntV; k++)
    {
        printf("Insira a opcao de voto entre 1 e 4: ");
        scanf("%d", &vt);

        if(vt == 1){
            c1++;
        }
        if(vt == 2){
            c2++;
        } 
        if(vt == 3){
            c3++;
        }  
        if(vt == 4){
            c4++;
        } 
        if(vt != 1 && vt != 2 && vt != 3 && vt != 4){
            nulo++;
        }
    }
         float vt1 = c1/2;
         float vt2 = c2/2;
         float vt3 = c3/2;
         float vt4 = c4/2;
         float vtnulo = nulo/2;

        printf("\n[1] Joao Borracheiro = %.0f votos, %.2f porcento\n", c1, vt1);
        printf("[2] Ze do caminhao = %.0f votos, %.2f porcento\n", c2, vt2);
        printf("[3] Maria da bodega = %.0f votos, %.2f porcento\n", c3, vt3);
        printf("[4] Ana = %.0f votos, %.2f porcento\n", c4, vt4);
        printf("\nNulos = %.0f votos, %.2f porcento", nulo, vtnulo);

}
