/*Faça um algoritmo que leia a altura de um grupo de 20 pessoas, calcule e exiba: 
A maior altura do grupo; 
A altura média; 
O número de pessoas com altura superior a 2 metros*/
#include <stdio.h>

int main()
{
    int cont=0, alt2=0;
    float somalt=0, alt, malt=0;
    
    while(cont<20){
        printf("\nDigite uma altura(em Metros): ");
        scanf("%f", &alt);
        
        if(alt<=0){
            printf("\ndigite uma altura válido");
        }else{
            if(alt>malt){
                malt=alt;
            }
            if(alt>2){
                alt2++;
            }
            somalt+=alt;   
            cont++;
        }
    }
    printf("\nA maior altura é %.2f\nA média das alturas é %.2f\nE %i pessoas tem mais de 2 metros", malt, somalt/20, alt2);

    return 0;
}
