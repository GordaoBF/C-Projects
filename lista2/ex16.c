/*Supondo que a população de um país A seja 90 milhões de habitantes, crescendo com uma taxa anual de 3.5% e que a população de um país B seja 140 milhões de habitantes, crescendo a uma taxa anual de 1%. Faça um algoritmo que calcule e mostre quantos anos serão necessários para que a população do país A ultrapasse a população do país B*/
#include <stdio.h>

int main()
{
    int cont=0;
    float a=90, b=140;
    while(a<b){
        printf("-----Interação %i-----\nPaís A -> %.2fM\nPaís B -> %.2fM\n", cont, a, b);
        a*=1.035;
        b*=1.01;
        cont++;
    }
    printf("-----Interação %i-----\nPaís A -> %.2fM\nPaís B -> %.2fM\n", cont, a, b);
    printf("\ndiferença de A pra B foi de %.2fM em ma questão de %i anos", a-b, cont);
    return 0;
}
