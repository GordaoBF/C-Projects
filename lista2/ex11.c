/*Calcular a soma dos 100 primeiros nº naturais*/
#include <stdio.h>

int main()
{
    int cont=0, som=0;
    
    while(cont<100){
        som+=cont;
        printf("interação %i: algarismo %i | soma %i\n",cont, cont, som);
        cont++;
    }
    
    printf("\nA soma dos 100 primeiros algarismos naturais é %i", som);

    return 0;
}
