/*Escrever em ordem decrescente os números múltiplos de 5 entre 100 e -100*/
#include <stdio.h>

int main()
{
    int cont=-100;
    
    printf("Aqui estão os números multiplos de 5 entre -100 e 100");
    
    while(cont<99){
        cont++;
        
        if(cont%5==0){printf("\n%i é multiplo de 5", cont);}
    }

    return 0;
}
