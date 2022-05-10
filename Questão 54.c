/* 54.	Seu Joaquim é um motorista que viaja todos os dias de Cajazeiras para João Pessoa para fazer entregas para empresa na qual trabalha. 
Durante o percurso, ele para realizar entregas em Sousa, Patos, Campina Grande e João Pessoa. Considerando que seu Joaquim gasta 50 minutos 
no percurso de Cajazeiras para Sousa, 2 horas no percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina Grande 
e 2 horas no percurso entre Campina Grande e João Pessoa, e que cada entrega demora exatamente 20 minutos, escreva um programa que leia o 
horário em que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o horário em que ele chegará em cada cidade do itinerário.  */

#include <stdio.h>

const int entrega = 20;    // 20m
const int souza = 50;      // 50m
const int patos = 120;     // 2h convertidos em min
const int campGrand = 150; // 2h30m convertidos em min
const int joaoP = 120;     // 2h convertidos em mim

void main()
{
    int horaSaida, minSaida;
    printf("Insira o horario que Seu Joaquim saiu de Cajazeiras(horas e minutos): ");
    scanf("%d%d", &horaSaida, &minSaida);

    int convH = (horaSaida * 60) + minSaida;

    int czSouzaH = (souza + convH) / 60;
    int czSouzaM = (souza + convH) % 60;
    if(czSouzaH > 24){
        czSouzaH = czSouzaH % 24;
        printf("\nEle chegara em Souza as %d:%d", czSouzaH, czSouzaM);
    }
    else{
        printf("\nEle chegara em Souza as %d:%d", czSouzaH, czSouzaM);
    }

    int szPatosH = (entrega + souza + patos + convH) / 60;
    int szPatosM = (entrega + souza + patos + convH) % 60;
    if(szPatosH > 24){
        szPatosH = szPatosH % 24;
        printf("\nEle chegara em Patos as %d:%d", szPatosH, szPatosM);
    }
    else{
        printf("\nEle chegara em Patos as %d:%d", szPatosH, szPatosM);
    }

    int ptCampGrandH = ((entrega * 2) + souza + patos + campGrand + convH) / 60;
    int ptCampGrandM = ((entrega * 2) + souza + patos + campGrand + convH) % 60;
    if(ptCampGrandH > 24){
        ptCampGrandH = ptCampGrandH % 24;
        printf("\nEle chegara em Campina Grande as %d:%d", ptCampGrandH, ptCampGrandM);
    }
    else{
        printf("\nEle chegara em Campina Grande as %d:%d", ptCampGrandH, ptCampGrandM);        
    }

    int cgJoaopH = ((entrega * 3) + souza + patos + campGrand + joaoP + convH) / 60;
    int cgJoaopM = ((entrega * 3) + souza + patos + campGrand + joaoP + convH) % 60;
    if(cgJoaopH > 24){
        cgJoaopH = cgJoaopH % 24;    
        printf("\nEle chegara em Joao Pessoa as %d:%d", cgJoaopH, cgJoaopM);
    }
}
