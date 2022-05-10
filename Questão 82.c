/* 82.    Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está aprovado por média, se fará prova final ou se está 
reprovado por média. Caso o aluno tenha que fazer a prova final, o programa deve informar quanto ele terá que tirar na prova. Você pode considerar 
que a média mínima para a aprovação por média é 7 e que a média mínima para fazer a prova final é 4. O cálculo da prova final é calculado através 
da fórmula abaixo. 

ProvaFinal=  25−(3*MediaParcial)/ 2  */

#include <stdio.h>

void main()
{
        float nt1, nt2, nt3;
        printf("Insira a primeira nota: ");
        scanf("%f", &nt1);
        printf("Insira a segunda nota: ");
        scanf("%f", &nt2);
        printf("Insira a terceira nota: ");
        scanf("%f", &nt3);

        if (nt1 > 10 || nt2 > 10 || nt3 > 10)
        {
            nt1 = nt1 * 0.1;
            nt2 = nt2 * 0.1;
            nt3 = nt3 * 0.1;
        }
        float ntF = (nt1 + nt2 + nt3) / 3;
        if (ntF >= 7)
        {
            printf("\nAluno aprovado por media com nota %.1f.", ntF);
        }
        else if (ntF >= 4 && ntF < 7)
        {

            float PrvF = (25 - (3 * ntF)) / 2;
            printf("\nO aluno ira pra final precisando de %.1f para passar.", PrvF);
        }
        else
        {
            printf("\nO aluno nao atingiu a media minima para ter direito a fazer prova final.");
        }
}
