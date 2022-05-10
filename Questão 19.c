

#include <stdio.h>

const float grauMax = 180; // 180° é o maior ângulo do triângulo

void main()
{
    float ang1, ang2;
    printf("Insira o valor do primeiro angulo interno do triangulo: ");
    scanf("%f", &ang1);
    printf("Insira o valor do segundo angulo: ");
    scanf("%f", &ang2);

    float somaAng = ang1 + ang2;
    float subAng = grauMax - somaAng;

    printf("\nO valor do terceiro angulo sera de > %.1f graus.", subAng);

    return 0;
}