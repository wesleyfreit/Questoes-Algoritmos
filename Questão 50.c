/* 50.	Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório, o médico atende os seus pacientes de acordo com 
a ordem em que eles chegaram (cada paciente recebe uma senha com o número da sua ordem de chegada) e cada consulta demora exatamente 25 minutos. 
Com base nestas informações, escreva um programa que leia um número inteiro correspondendo à hora e outro correspondendo aos minutos em que Ana 
chegou ao consultório e o número da senha que ela recebeu e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao 
consultório no exato momento em que o médico ia atender o paciente que recebeu a senha 1.     */

#include <stdio.h>

const int consult = 25;
const int horaT = 60;

void main()
{
    int hora, min, senha;
    printf("Informe a hora e os minutos em que Ana chegou ao consultorio: ");
    scanf("%d%d", &hora, &min);
    printf("Informe a senha que Ana recebeu: ");
    scanf("%d", &senha);

    int minPAt = senha * consult;
    int convPmin = horaT * hora + min + minPAt;
    if(convPmin > 1440)
    {
        printf("\nO valor informado ultrapassa 24h, tente novamente.");
    }
    else
    {
        int convPhor = convPmin / 60;
        int minRest = convPmin % 60;

        printf("\nAna sera atendida as %dh:%dm.", convPhor, minRest);
    }

}

