/*QUANDO FOR UTILIZAR O MESMO ENDEREÇO DE MEMÓRIA DO VOID INICIAL PARA PASSAR PARA O VOID PERMUTA, DEVE-SE UTILIZAR
O '&' NA HORA DE CHAMAR A VARIÁVEL EM VOID, Ex > permuta(&m, &n);
E DA MESMA FORMA DEVE-SE UTILIZAR '*' NA HORA DE RECEBER OS VALORES NO void permuta(){}, 
Ex > void permuta(int *a, int *b){}, desta forma os valores nos dois voids não são mais independentes, o void
secundário estará utilizando o mesmo endereço de memória do void main principal. */

// As duas formas de passar parametros para um subprograma são essas, por valor e por referência, 
// A por valor é a normal já vindo utilizada.
// A passagem por referência é a citada acima.

//NA PRÁTICA NÃO HÁ PASSAGEM POR REFERÊNCIA EM LINGUAGEM C, ENTÃO ESTÁ SENDO UTILIZADO UM TIPO ESPECIAL DE VARIÁVEL;
//O 'PONTEIRO', ELES FAZEM O MESMO EFEITO DA PASSAGEM POR REFERÊNCIA, ELES GUARDAM O ENDEREÇO DE MEMÓRIA.

#include <stdio.h>

void permuta(int *m, int *n)
{
    int aux = *m;
    *m = *n;
    *n = aux;
}
void main()
{
    int m, n;

    printf("\nInsira as posicoes que deseja inverter: ");
    scanf("%d%d", &m, &n);

    printf("\nANTES - [%d, %d]", m, n);

    permuta(&m, &n);

    printf("\nDEPOIS - [%d, %d]", m, n);
}