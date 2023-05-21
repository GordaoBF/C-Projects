/*Leia 5 valores para uma variável a . A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos foram positivos e quantos foram negativos*/
#include <stdio.h>

int main()
{
    int cont=0,a, pos=0,neg=0,imp=0,par=0;
    while(cont<5){
        printf("Escreva um número inteira ai piazão: \n");
        scanf("%i", &a);    
        
        if(a<0){
            neg++;
        }else if(a>0){
            pos++;
        }
        
        if(a%2==0){
            par++;
        }else{imp++;}
        cont++;
    }

    printf("Dos 5 números digitados, %i foram positivos, %i negativos\n%i pares e %i impares", pos, neg, par, imp);

    return 0;
}
