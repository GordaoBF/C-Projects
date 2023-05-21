#include <stdio.h>

int main()
{
    float a1, r, soma;
    int n, cont;
    cont=0;
    soma=0;
    
    printf("vamos fazer uma progressao aritmetica \numa quantidade de termos: ");
    scanf("%i",&n);
    printf("escreva uma razão: ");
    scanf("%f",&r);
    printf("escreva o primeiro termo da progressão: ");
    scanf("%f",&a1);
    
    while (cont<n){
        a1+=r;
        printf("%i Interação: %.2f + %.2f = %.2f \n",cont, a1-r, r, a1);
        cont++;
        soma+=a1;
    }
    printf("soma de todos os algarismos da progressao: %.4f", soma );

    return 0;
}
